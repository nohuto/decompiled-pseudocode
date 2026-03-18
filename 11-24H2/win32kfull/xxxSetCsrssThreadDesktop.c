/*
 * XREFs of xxxSetCsrssThreadDesktop @ 0x140107460
 * Callers:
 *     xxxQueryInformationThread @ 0x14003E6F4 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x140106AA0 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x140216A70 (xxxHardErrorControl.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxSetThreadDesktop @ 0x1401071FC (xxxSetThreadDesktop.c)
 *     xxxInternalGetMessage @ 0x140107C10 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 *     CloseProtectedHandle @ 0x1401AABAC (CloseProtectedHandle.c)
 */

NTSTATUS __fastcall xxxSetCsrssThreadDesktop(_DWORD *Object, PVOID *a2)
{
  struct tagTHREADINFO *v4; // rax
  struct tagTHREADINFO *v5; // r14
  NTSTATUS result; // eax
  void *v7; // rcx
  HANDLE *v8; // rsi
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-58h]
  unsigned __int64 v13; // [rsp+20h] [rbp-58h]
  _OWORD v14[3]; // [rsp+40h] [rbp-38h] BYREF

  v4 = PtiCurrent((__int64)Object, (__int64)a2);
  v5 = v4;
  if ( (Object[12] & 8) != 0 )
    return -1073741823;
  v7 = (void *)*((_QWORD *)v4 + 62);
  *a2 = v7;
  if ( !v7 || (result = ObReferenceObjectByPointer(v7, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 0), result >= 0) )
  {
    v8 = a2 + 1;
    v9 = ObOpenObjectByPointer(Object, 0, 0LL, 0x1F0003u, 0LL, 0, a2 + 1);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = (_DWORD *)*((_QWORD *)v5 + 62);
      if ( Object != v11 )
      {
        if ( v11 )
        {
          LODWORD(v12) = 3;
          memset(v14, 0, sizeof(v14));
          if ( (unsigned int)xxxInternalGetMessage((__int64)v14, v12, 0) )
          {
            do
            {
              xxxDispatchMessage((struct tagMSG *)v14);
              LODWORD(v13) = 3;
            }
            while ( (unsigned int)xxxInternalGetMessage((__int64)v14, v13, 0) );
            v8 = a2 + 1;
          }
        }
        v10 = xxxSetThreadDesktop(0LL, (__int64)Object);
        if ( v10 < 0 )
        {
          if ( *a2 )
            ObfDereferenceObject(*a2);
          CloseProtectedHandle(*v8);
        }
      }
    }
    else
    {
      SetLastNtError(v9);
      if ( *a2 )
        ObfDereferenceObject(*a2);
    }
    return v10;
  }
  return result;
}
