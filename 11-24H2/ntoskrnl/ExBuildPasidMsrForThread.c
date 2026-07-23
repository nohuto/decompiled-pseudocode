/*
 * XREFs of ExBuildPasidMsrForThread @ 0x1403FFF2C
 * Callers:
 *     KiInitializeContextThread @ 0x1403FF414 (KiInitializeContextThread.c)
 *     ExSvmUpdateThreadPasidMsrApc @ 0x1407C0F10 (ExSvmUpdateThreadPasidMsrApc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExBuildPasidMsrForThread(__int64 a1)
{
  __int64 result; // rax
  int v2; // r8d
  __int64 v3; // [rsp+8h] [rbp+8h]

  result = 0LL;
  HIDWORD(v3) = 0;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 544) + 1536LL);
  if ( v2 )
  {
    *(_BYTE *)(a1 + 1449) |= 0x80u;
    LODWORD(v3) = (v2 - 1) & 0xFFFFF | 0x80000000;
    return v3;
  }
  return result;
}
