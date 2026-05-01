/*
 * XREFs of ReportHangInternal @ 0x18009C398
 * Callers:
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x180091878 (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 * Callees:
 *     ?WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z @ 0x18006B6F4 (-WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z.c)
 *     GetCurrentThreadId_0 @ 0x180073178 (GetCurrentThreadId_0.c)
 *     CloseHandle_0 @ 0x180073184 (CloseHandle_0.c)
 *     GetTickCount_0 @ 0x18007319C (GetTickCount_0.c)
 *     IsGetThreadDesktopPresent @ 0x180073A6C (IsGetThreadDesktopPresent.c)
 *     RhpCaptureSnapshots @ 0x1800918F0 (RhpCaptureSnapshots.c)
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x18009C70C (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A7C00 (_alloca_probe.c)
 */

__int64 __fastcall ReportHangInternal(__int64 a1, unsigned int *a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v8; // r12d
  __int64 v9; // r14
  int v10; // ebx
  __int64 v11; // r9
  DWORD CurrentThreadId_0; // eax
  HDESK ThreadDesktop; // rax
  const wchar_t *v14; // rcx
  __m128i *v15; // rax
  _QWORD *v16; // rsi
  unsigned int *v17; // r8
  DWORD v18; // ecx
  __int64 v19; // rax
  DWORD nLengthNeeded; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handles[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE Src[1408]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v24; // [rsp+5D0h] [rbp+4D0h] BYREF
  _BYTE v25[38]; // [rsp+5D2h] [rbp+4D2h] BYREF
  unsigned int v26; // [rsp+5F8h] [rbp+4F8h]
  int v27; // [rsp+5FCh] [rbp+4FCh]
  HWND hwnd; // [rsp+600h] [rbp+500h]
  HANDLE hObject; // [rsp+B38h] [rbp+A38h]
  HANDLE v30; // [rsp+B40h] [rbp+A40h]
  _DWORD v31[12]; // [rsp+B50h] [rbp+A50h] BYREF
  int v32[18]; // [rsp+B80h] [rbp+A80h] BYREF
  _QWORD v33[16]; // [rsp+BC8h] [rbp+AC8h] BYREF
  __int128 v34; // [rsp+C48h] [rbp+B48h] BYREF
  __m128i v35[4]; // [rsp+C58h] [rbp+B58h] BYREF
  __int64 v36; // [rsp+C98h] [rbp+B98h]
  _WORD pvInfo[520]; // [rsp+CA0h] [rbp+BA0h] BYREF
  int v38; // [rsp+10B0h] [rbp+FB0h]
  DWORD TickCount_0; // [rsp+10B4h] [rbp+FB4h]

  v5 = a3;
  LOWORD(v31[0]) = 0;
  memset_0((char *)v31 + 2, 0, 0x576uLL);
  v24 = 0;
  memset_0(v25, 0, 0x576uLL);
  *(_OWORD *)Handles = 0LL;
  if ( !a2 || !(_DWORD)v5 || (v8 = *a2, (a5 & 0xFFE00000) != 0) )
  {
    v10 = -1073741811;
    goto LABEL_46;
  }
  v9 = 16LL;
  if ( (unsigned int)v5 > 0x10 )
  {
    v10 = -1073740757;
    goto LABEL_46;
  }
  memset_0(Src, 0, 0x578uLL);
  memcpy_0(v31, Src, 0x578uLL);
  v31[0] = 91751760;
  v36 = 0LL;
  v31[10] = 0x10000000;
  v32[16] = a4;
  TickCount_0 = GetTickCount_0();
  memcpy_0(v32, a2, 4 * v5);
  if ( (a5 & 2) != 0 )
    pvInfo[260] = 0;
  nLengthNeeded = 0;
  pvInfo[0] = 0;
  if ( !IsGetThreadDesktopPresent()
    || !IsGetThreadDesktopPresent()
    || (CurrentThreadId_0 = GetCurrentThreadId_0(), (ThreadDesktop = GetThreadDesktop(CurrentThreadId_0)) == 0LL)
    || !GetUserObjectInformationW(ThreadDesktop, 2, pvInfo, 0x208u, &nLengthNeeded) )
  {
    pvInfo[0] = 0;
  }
  v38 = a5;
  if ( (a5 & 0x84000) != 0 )
  {
    v15 = v35;
    LODWORD(v14) = 0;
    do
    {
      if ( (a5 & 0x80000) != 0 )
      {
        v15->m128i_i32[0] = -1073741248;
      }
      else if ( !(_DWORD)v14 || (a5 & 0x100000) != 0 )
      {
        v15->m128i_i32[0] = -1073741822;
      }
      v14 = (const wchar_t *)(unsigned int)((_DWORD)v14 + 1);
      v15 = (__m128i *)((char *)v15 + 4);
    }
    while ( (unsigned int)v14 < (unsigned int)v5 );
  }
  else
  {
    RhpCaptureSnapshots(v33, &v34, v35, v11, v32);
  }
  v10 = WersvcSendMessage(v14, (struct _WERSVC_MSG *)v31, (struct _WERSVC_MSG *)&v24);
  v16 = v33;
  do
  {
    if ( *v16 )
      PssNtFreeSnapshot();
    ++v16;
    --v9;
  }
  while ( v9 );
  if ( v10 >= 0 )
  {
    if ( v10 == 258 )
    {
      v10 = -1073741248;
      goto LABEL_46;
    }
    v17 = (unsigned int *)v26;
    switch ( v26 )
    {
      case 0x10000001u:
        goto LABEL_32;
      case 0x10000002u:
        v10 = v27;
        if ( v27 < 0 )
          goto LABEL_46;
        break;
      case 0x10000005u:
LABEL_32:
        v18 = 0;
        if ( hObject )
        {
          Handles[0] = hObject;
          v18 = 1;
        }
        if ( v30 )
        {
          v19 = v18++;
          Handles[v19] = v30;
        }
        if ( (a5 & 0x20) != 0 && v18 )
        {
          WaitForMultipleObjects(v18, Handles, 0, 0xFFFFFFFF);
          v17 = (unsigned int *)v26;
        }
        if ( hwnd && (_DWORD)v17 == 268435461 )
          UtilRegisterErrorReportingDialog(hwnd, v8, v17);
        v10 = 0;
        goto LABEL_46;
    }
    v10 = -1073741823;
  }
LABEL_46:
  if ( hObject )
    CloseHandle_0(hObject);
  if ( v30 )
    CloseHandle_0(v30);
  return (unsigned int)v10;
}
