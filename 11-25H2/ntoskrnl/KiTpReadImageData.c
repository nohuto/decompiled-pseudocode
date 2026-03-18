/*
 * XREFs of KiTpReadImageData @ 0x1407320B4
 * Callers:
 *     RtlIcParseInstruction @ 0x140BA70E8 (RtlIcParseInstruction.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall KiTpReadImageData(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // edi
  _KPROCESS *v8; // rcx
  unsigned int v9; // eax
  _OWORD v11[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  v7 = 4096 - (*(_DWORD *)(a1 + 16) & 0xFFF);
  if ( v7 > a3 )
    v7 = a3;
  v8 = *(_KPROCESS **)a1;
  if ( v8 )
    KiStackAttachProcess(v8, 0, (__int64)v11);
  memmove(a2, *(const void **)(a1 + 16), v7);
  if ( a4 )
    *a4 = v7;
  v9 = *(_DWORD *)(a1 + 32);
  if ( v9 >= v7 )
    v9 = v7;
  memmove(*(void **)(a1 + 24), a2, v9);
  if ( *(_QWORD *)a1 )
    KiUnstackDetachProcess((__int64)v11, 0LL);
  return 0LL;
}
