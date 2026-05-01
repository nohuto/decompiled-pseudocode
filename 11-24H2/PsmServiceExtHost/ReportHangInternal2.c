/*
 * XREFs of ReportHangInternal2 @ 0x18006B9AC
 * Callers:
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x180091878 (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 * Callees:
 *     ?WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z @ 0x18006B6F4 (-WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z.c)
 *     RhpCaptureSnapshots @ 0x1800918F0 (RhpCaptureSnapshots.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall ReportHangInternal2(void *Src, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  int v6; // ebx
  __int64 v7; // rdi
  int v8; // r9d
  const wchar_t *v9; // rcx
  _QWORD *v10; // rsi
  ULONG v11; // ecx
  __int64 v12; // rax
  HANDLE Object[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[38]; // [rsp+42h] [rbp-BEh] BYREF
  int v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+5A8h] [rbp+4A8h]
  HANDLE v20; // [rsp+5B0h] [rbp+4B0h]
  _DWORD v21[12]; // [rsp+5C0h] [rbp+4C0h] BYREF
  _BYTE v22[64]; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v23; // [rsp+630h] [rbp+530h]
  _BYTE v24[128]; // [rsp+638h] [rbp+538h] BYREF
  char v25; // [rsp+6B8h] [rbp+5B8h] BYREF
  char v26; // [rsp+6C8h] [rbp+5C8h] BYREF
  __int64 v27; // [rsp+708h] [rbp+608h]
  int v28; // [rsp+B20h] [rbp+A20h]
  int v29; // [rsp+B24h] [rbp+A24h]

  v4 = a2;
  LOWORD(v21[0]) = 0;
  memset_0((char *)v21 + 2, 0, 0x576uLL);
  v15 = 0;
  memset_0(v16, 0, 0x576uLL);
  *(_OWORD *)Object = 0LL;
  if ( !(_DWORD)v4 && !a3 )
  {
    v6 = -1073741811;
    goto LABEL_23;
  }
  v7 = 16LL;
  if ( (unsigned int)v4 > 0x10 )
  {
    v6 = -1073740757;
    goto LABEL_23;
  }
  memset_0(v21, 0, 0x578uLL);
  v21[0] = 91751760;
  v21[10] = 0x10000000;
  memcpy_0(v22, Src, 4 * v4);
  v23 = a3;
  v27 = 0LL;
  v28 = 229500;
  v29 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  RhpCaptureSnapshots((unsigned int)v24, (unsigned int)&v25, (unsigned int)&v26, v8, (__int64)v22);
  v6 = WersvcSendMessage(v9, (struct _WERSVC_MSG *)v21, (struct _WERSVC_MSG *)&v15);
  v10 = v24;
  do
  {
    if ( *v10 )
      PssNtFreeSnapshot();
    ++v10;
    --v7;
  }
  while ( v7 );
  if ( v6 >= 0 )
  {
    if ( v6 == 258 )
    {
      v6 = -1073741248;
      goto LABEL_23;
    }
    switch ( v17 )
    {
      case 268435457:
        goto LABEL_16;
      case 268435458:
        v6 = v18;
        if ( v18 < 0 )
          goto LABEL_23;
        break;
      case 268435461:
LABEL_16:
        v11 = 0;
        if ( Handle )
        {
          Object[0] = Handle;
          v11 = 1;
        }
        if ( v20 )
        {
          v12 = v11++;
          Object[v12] = v20;
        }
        if ( v11 )
          NtWaitForMultipleObjects(v11, Object, WaitAny, 0, 0LL);
        v6 = 0;
        goto LABEL_23;
    }
    v6 = -1073741823;
  }
LABEL_23:
  if ( Handle )
    NtClose(Handle);
  if ( v20 )
    NtClose(v20);
  return (unsigned int)v6;
}
