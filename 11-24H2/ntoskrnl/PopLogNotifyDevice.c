/*
 * XREFs of PopLogNotifyDevice @ 0x1403A8724
 * Callers:
 *     PopRequestPowerIrp @ 0x1403A7FD0 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140B717B8 (PopNotifyDevice.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall PopLogNotifyDevice(__int64 a1, __int64 a2, __int64 a3)
{
  void *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // r11d
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r11d
  _QWORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+40h] [rbp-C0h]
  char v15; // [rsp+41h] [rbp-BFh]
  char v16; // [rsp+42h] [rbp-BEh]
  int v17; // [rsp+44h] [rbp-BCh]
  int v18; // [rsp+48h] [rbp-B8h]
  wchar_t pszDest[112]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v20; // [rsp+130h] [rbp+30h] BYREF
  int v21; // [rsp+138h] [rbp+38h]
  int v22; // [rsp+13Ch] [rbp+3Ch]

  result = memset_0(v13, 0, 0x100uLL);
  if ( (xmmword_140FC6B50 & 0x8000) != 0 )
  {
    v7 = *(_QWORD *)(a3 + 184);
    v8 = *(_QWORD *)(a1 + 8);
    v13[0] = a3;
    v13[1] = *(_QWORD *)(v8 + 24);
    v15 = *(_BYTE *)(v7 - 72);
    v16 = *(_BYTE *)(v7 - 71);
    v17 = *(_DWORD *)(v7 - 56);
    v18 = *(_DWORD *)(v7 - 48);
    if ( a2 )
    {
      v10 = *(_QWORD *)(a2 + 72);
      v14 = *(_BYTE *)(a2 + 56);
      if ( v10 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( *(_WORD *)(v10 + 2 * v11) );
        v12 = v11;
        if ( (unsigned int)v11 > 0x6C )
          v12 = 108;
        RtlStringCchCopyW(pszDest, 0x6DuLL, (NTSTRSAFE_PCWSTR)(v10 + 2LL * (unsigned int)(v11 - v12)));
        goto LABEL_5;
      }
    }
    else
    {
      v14 = 0;
    }
    pszDest[0] = 0;
    v9 = 0;
LABEL_5:
    v22 = 0;
    v20 = v13;
    v21 = 2 * v9 + 40;
    return (void *)EtwTraceKernelEvent((int)&v20, 1, 0x80008000, 4646, 5249026);
  }
  return result;
}
