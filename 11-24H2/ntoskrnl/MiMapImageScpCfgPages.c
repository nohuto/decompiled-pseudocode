/*
 * XREFs of MiMapImageScpCfgPages @ 0x140294080
 * Callers:
 *     MiMapAllImageScpPages @ 0x14091BCE0 (MiMapAllImageScpPages.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x140203600 (MiMakePrototypePteDirect.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiIncrementCombinedPte @ 0x1402946E0 (MiIncrementCombinedPte.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiGetImageExtensionBaseAddress @ 0x140A1FFB0 (MiGetImageExtensionBaseAddress.c)
 *     PsGetScpCfgPageTypeForProcess @ 0x140A264F8 (PsGetScpCfgPageTypeForProcess.c)
 */

__int64 __fastcall MiMapImageScpCfgPages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 ImageExtensionBaseAddress; // rax
  _OWORD v13[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+A0h] [rbp+8h] BYREF

  v14 = 0LL;
  result = *(_QWORD *)(a1 + 1040);
  memset(v13, 0, sizeof(v13));
  if ( (*(_BYTE *)(result + 1061) & 4) != 0 )
  {
    v6 = *(_QWORD *)((*(_QWORD *)(**(_QWORD **)(a2 + 72) + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
    LOBYTE(a3) = *(_BYTE *)((v6 + 72) & -(__int64)(v6 != 0)) & 1;
    result = PsGetScpCfgPageTypeForProcess(a1, v6 + 72, a3);
    if ( (_DWORD)result != 4 )
    {
      v7 = (unsigned int)dword_140E2D8E0;
      v8 = qword_140E2D8F8[(int)result];
      MiIncrementCombinedPte(a1 + 1024, v8 + 32, 0LL);
      CurrentThread = KeGetCurrentThread();
      MiLockVad((__int64)CurrentThread, a2);
      v15 = MiMakePrototypePteDirect(v8 + 32) | 0x800;
      ImageExtensionBaseAddress = MiGetImageExtensionBaseAddress(a2, v10, v11);
      MiDecommitPages(
        ((unsigned __int64)(v7 + ImageExtensionBaseAddress) >> 9) & 0xFFFFFFF8,
        1,
        0,
        a1,
        a2,
        1,
        (__int64)&v15,
        (__int64)v13);
      return MiUnlockVad(CurrentThread, a2);
    }
  }
  return result;
}
