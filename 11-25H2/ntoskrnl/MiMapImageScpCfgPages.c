/*
 * XREFs of MiMapImageScpCfgPages @ 0x1402A69D0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiMapAllImageScpPages @ 0x1409045F8 (MiMapAllImageScpPages.c)
 * Callees:
 *     MiIncrementCombinedPte @ 0x14023AE9C (MiIncrementCombinedPte.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiMakePrototypePteDirect @ 0x1402A69A0 (MiMakePrototypePteDirect.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 *     MiGetImageExtensionBaseAddress @ 0x140A2BA60 (MiGetImageExtensionBaseAddress.c)
 *     PsGetScpCfgPageTypeForProcess @ 0x140A2E47C (PsGetScpCfgPageTypeForProcess.c)
 */

__int64 __fastcall MiMapImageScpCfgPages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ImageExtensionBaseAddress; // rax
  _OWORD v11[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v12; // [rsp+70h] [rbp-28h]
  __int64 v13; // [rsp+A0h] [rbp+8h] BYREF

  v12 = 0LL;
  result = *(_QWORD *)(a1 + 1040);
  memset(v11, 0, sizeof(v11));
  if ( (*(_BYTE *)(result + 1061) & 4) != 0 )
  {
    v6 = *(_QWORD *)((*(_QWORD *)(**(_QWORD **)(a2 + 72) + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
    LOBYTE(a3) = *(_BYTE *)((v6 + 72) & -(__int64)(v6 != 0)) & 1;
    result = PsGetScpCfgPageTypeForProcess(a1, v6 + 72, a3);
    if ( (_DWORD)result != 4 )
    {
      v7 = (unsigned int)dword_140E2D560;
      v8 = qword_140E2D578[(int)result];
      MiIncrementCombinedPte(a1 + 1024, v8 + 32, 0);
      CurrentThread = KeGetCurrentThread();
      MiLockVad(CurrentThread, a2);
      v13 = MiMakePrototypePteDirect(v8 + 32) | 0x800;
      ImageExtensionBaseAddress = MiGetImageExtensionBaseAddress(a2);
      MiDecommitPages(
        ((unsigned __int64)(v7 + ImageExtensionBaseAddress) >> 9) & 0xFFFFFFF8,
        1,
        0,
        a1,
        a2,
        1,
        (__int64)&v13,
        (__int64)v11);
      return (__int64)MiUnlockVad((__int64)CurrentThread, a2);
    }
  }
  return result;
}
