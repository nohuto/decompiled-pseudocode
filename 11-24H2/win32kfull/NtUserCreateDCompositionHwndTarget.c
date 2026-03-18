/*
 * XREFs of NtUserCreateDCompositionHwndTarget @ 0x1401AC430
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x14015DA00 (NtUserDestroyDCompositionHwndTarget.c)
 *     UserSetLastStatus @ 0x14015E5E8 (UserSetLastStatus.c)
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1401AC5D0 (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z.c)
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z @ 0x1401AC6C4 (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall NtUserCreateDCompositionHwndTarget(HWND a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rdi
  int v7; // r15d
  NTSTATUS v8; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  struct CompositionObject *v11; // [rsp+A8h] [rbp+20h] BYREF

  Handle = (HANDLE)-1LL;
  v6 = 0LL;
  v7 = 0;
  KeEnterCriticalRegion();
  v8 = a3 == 0LL ? 0xC000000D : 0;
  if ( a3 && a2 >= 3 )
    v8 = -1073741811;
  if ( v8 < 0 )
    goto LABEL_16;
  v8 = TestWindowForCompositionTarget(a1, a2);
  if ( v8 < 0 )
    goto LABEL_16;
  v11 = 0LL;
  v8 = CreateSharedSystemVisualObject(&v11);
  if ( v8 >= 0 )
  {
    v8 = AttachWindowCompositionTarget(a1, a2, v11);
    if ( v8 >= 0 )
    {
      v7 = 1;
      v8 = CompositionObject::CreateHandle(v11, 1u, 0, 0, &Handle);
    }
    CompositionObject::Release(v11);
  }
  if ( v8 < 0 )
  {
LABEL_16:
    if ( v7 )
      NtUserDestroyDCompositionHwndTarget(a1, a2);
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
    UserSetLastStatus(v8, 0);
  }
  else
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    *a3 = Handle;
  }
  KeLeaveCriticalRegion();
  LOBYTE(v6) = v8 >= 0;
  return v6;
}
