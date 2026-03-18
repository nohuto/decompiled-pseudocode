/*
 * XREFs of FreeProcessHidTable @ 0x1401F4078
 * Callers:
 *     DestroyProcessHidRequests @ 0x1401F4060 (DestroyProcessHidRequests.c)
 * Callees:
 *     ?HidDeviceStartStop@@YAXXZ @ 0x140130500 (-HidDeviceStartStop@@YAXXZ.c)
 *     FreeHidProcessRequest @ 0x140130B64 (FreeHidProcessRequest.c)
 */

void __fastcall FreeProcessHidTable(__int64 a1)
{
  __int64 *v1; // rbx
  struct tagPROCESS_HID_REQUEST **v2; // rsi
  int v3; // ebp
  struct tagPROCESS_HID_REQUEST **v4; // rdi
  struct tagPROCESS_HID_REQUEST **i; // rdi
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = *(__int64 **)(a1 + 832);
  v1[13] = 0LL;
  v2 = (struct tagPROCESS_HID_REQUEST **)(v1 + 2);
  *(_QWORD *)(a1 + 832) = 0LL;
  if ( *v2 == (struct tagPROCESS_HID_REQUEST *)v2
    && (v4 = (struct tagPROCESS_HID_REQUEST **)(v1 + 4), *v4 == (struct tagPROCESS_HID_REQUEST *)v4)
    && (__int64 *)v1[6] == v1 + 6
    && (*(_DWORD *)(a1 + 816) & 0x8000000) == 0 )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    v4 = (struct tagPROCESS_HID_REQUEST **)(v1 + 4);
  }
  HMAssignmentUnlock(v1 + 9);
  HMAssignmentUnlock(v1 + 8);
  while ( *v2 != (struct tagPROCESS_HID_REQUEST *)v2 )
    FreeHidProcessRequest(*v2, 1, (struct tagPROCESS_HID_TABLE *)v1);
  while ( *v4 != (struct tagPROCESS_HID_REQUEST *)v4 )
    FreeHidProcessRequest(*v4, 2, (struct tagPROCESS_HID_TABLE *)v1);
  for ( i = (struct tagPROCESS_HID_REQUEST **)(v1 + 6);
        *i != (struct tagPROCESS_HID_REQUEST *)i;
        FreeHidProcessRequest(*i, 3, (struct tagPROCESS_HID_TABLE *)v1) )
  {
    ;
  }
  v6 = (__int64 *)*v1;
  if ( *(__int64 **)(*v1 + 8) != v1 || (v7 = (__int64 **)v1[1], *v7 != v1) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  Win32FreePool(v1);
  if ( v3 )
    HidDeviceStartStop(v9, v8);
}
