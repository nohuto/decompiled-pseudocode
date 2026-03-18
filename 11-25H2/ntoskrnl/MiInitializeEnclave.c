/*
 * XREFs of MiInitializeEnclave @ 0x1407E77E4
 * Callers:
 *     NtInitializeEnclave @ 0x1407E7EC0 (NtInitializeEnclave.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     KeInitializeEnclave @ 0x14072FEB4 (KeInitializeEnclave.c)
 *     MiInitializeVsmEnclave @ 0x1407E78EC (MiInitializeVsmEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140B536C0 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiInitializeEnclave(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  int v12; // edi
  int v13; // eax
  int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15[6]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0;
  v8 = MiObtainReferencedVadEx(a2, 0, (int *)v15);
  v10 = v8;
  if ( !v8 )
    return v15[0];
  if ( (*(_DWORD *)(v8 + 48) & 0xC200000) == 0x8200000 )
  {
    v13 = *(_DWORD *)(v8 + 64);
    if ( (v13 & 2) != 0 )
    {
      v12 = -1073740528;
    }
    else if ( (v13 & 1) != 0 )
    {
      if ( a4 == 4096 )
      {
        v12 = KeInitializeEnclave((__int64)(*(_QWORD *)(v10 + 80) << 25) >> 16, a3, v9, a3 + 2048, v14, a5);
        if ( v12 >= 0 )
        {
          MiReturnReservedEnclavePages(v10, -1LL);
          *(_DWORD *)(v10 + 64) |= 2u;
          v12 = 0;
        }
      }
      else
      {
        v12 = -1073741820;
      }
    }
    else
    {
      v12 = MiInitializeVsmEnclave(a1, v10, a3, a4);
    }
  }
  else
  {
    v12 = -1073741800;
  }
  MiUnlockAndDereferenceVad((char *)v10);
  return (unsigned int)v12;
}
