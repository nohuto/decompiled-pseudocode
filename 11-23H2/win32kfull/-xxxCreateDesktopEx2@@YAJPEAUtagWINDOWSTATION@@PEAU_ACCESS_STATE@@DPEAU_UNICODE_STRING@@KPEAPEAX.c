/*
 * XREFs of ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C007B134
 * Callers:
 *     EditionParseDesktop @ 0x1C007AFD0 (EditionParseDesktop.c)
 * Callees:
 *     CreateDesktopHeap @ 0x1C007B47C (CreateDesktopHeap.c)
 *     GetDesktopHeapSize @ 0x1C007B540 (GetDesktopHeapSize.c)
 *     DesktopAlloc @ 0x1C00E42F0 (DesktopAlloc.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall xxxCreateDesktopEx2(
        struct tagWINDOWSTATION *a1,
        struct _ACCESS_STATE *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4,
        unsigned int a5,
        void **a6)
{
  unsigned __int16 v9; // si
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KPROCESS *CurrentProcess; // rax
  __int64 result; // rax
  unsigned int DesktopHeapSize; // edi
  struct tagTHREADINFO *v17; // rax
  __int64 DesktopHeap; // rax
  void *v19; // rsi
  struct tagTHREADINFO *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rcx
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  PVOID v28; // rdx
  PVOID v29; // rax
  struct tagTHREADINFO *v30; // rax
  unsigned int v31; // [rsp+40h] [rbp-20h]
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h] BYREF

  Object = 0LL;
  v31 = 0;
  v9 = 0;
  v10 = 0;
  if ( !(unsigned __int8)ObCheckCreateObjectAccess(a1, 8LL, a2) )
    return v31;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v12, v11, v13);
  if ( (*((_DWORD *)a1 + 16) & 2) != 0 && PsGetProcessId(CurrentProcess) != (HANDLE)gpidLogon )
  {
    v33 = 0LL;
    GetProcessLuid(0LL, &v33);
    if ( v33 == *((_QWORD *)a1 + 22) )
      return 3221226091LL;
  }
  result = CreateDesktopObObject(a4, a1, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      v9 = 3;
    }
    else
    {
      v29 = (PVOID)*((_QWORD *)a1 + 2);
      if ( v29 )
      {
        if ( gspdeskDisconnect )
        {
          if ( v29 == gspdeskDisconnect )
            v10 = 1;
        }
        else
        {
          v9 = 2;
        }
      }
      else
      {
        v9 = 1;
      }
    }
    if ( a5 )
      DesktopHeapSize = a5 << 10;
    else
      DesktopHeapSize = GetDesktopHeapSize(v9);
    if ( DesktopHeapSize < 0x2000 )
      DesktopHeapSize = 0x2000;
    v17 = PtiCurrentShared();
    *((_DWORD *)v17 + 318) |= 0x40u;
    DesktopHeap = CreateDesktopHeap((char *)Object + 136, DesktopHeapSize);
    *((_QWORD *)Object + 16) = DesktopHeap;
    if ( *((_QWORD *)Object + 16) )
    {
      *((_DWORD *)Object + 36) = DesktopHeapSize;
      v19 = (void *)DesktopAlloc(Object, 72LL, 2LL);
      if ( v19 )
      {
        v20 = PtiCurrentShared();
        *((_DWORD *)v20 + 318) &= ~0x40u;
        v21 = (_QWORD *)Win32AllocPoolZInit(256LL, 1684763477LL);
        if ( v21 )
        {
          *v21 = v19;
          *((_QWORD *)Object + 1) = v21;
          v22 = (char *)Object + 176;
          v23 = ++gdwDesktopId;
          *((_QWORD *)Object + 23) = (char *)Object + 176;
          *v22 = v22;
          v24 = (char *)Object + 312;
          *((_QWORD *)Object + 40) = (char *)Object + 312;
          *v24 = v24;
          if ( v23 == 0xFFFFFFFFLL )
          {
            gdwDesktopId = 1LL;
            LODWORD(v23) = 1;
          }
          ***((_QWORD ***)Object + 1) = (unsigned int)v23 | ((gCookie ^ (unsigned __int64)Object) << 32);
          v25 = *((_QWORD *)Object + 17);
          *((_QWORD *)Object + 2) = v25;
          *((_QWORD *)Object + 3) = v25 + DesktopHeapSize;
          LockObjectAssignment((char *)Object + 40, a1);
          if ( !*((_QWORD *)a1 + 2) )
          {
            if ( (*((_DWORD *)a1 + 16) & 4) == 0 )
              LockObjectAssignment(&grpdeskLogon, Object);
            LockObjectAssignment(*(_QWORD *)(*((_QWORD *)a1 + 7) + 8LL) + 24LL, Object);
          }
          LockObjectAssignment((char *)Object + 32, *((_QWORD *)a1 + 2));
          LockObjectAssignment((char *)a1 + 16, Object);
          p_RemainingDesiredAccess = &a2->RemainingDesiredAccess;
          RemainingDesiredAccess = a2->RemainingDesiredAccess;
          if ( (RemainingDesiredAccess & 0x2000000) != 0 )
            *p_RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
          RtlMapGenericMask(&a2->RemainingDesiredAccess, DesktopMapping);
          v28 = Object;
          *p_RemainingDesiredAccess &= DesktopMapping->GenericAll | 0x1000000;
          *a6 = v28;
          if ( v10 )
            LockObjectAssignment(grpdeskIODefault, v28);
          return 0LL;
        }
        RtlFreeHeap(*((PVOID *)Object + 17), 0, v19);
      }
    }
    else if ( (*gpsi & 0x100) != 0 )
    {
      _InterlockedAnd(gpsi, 0xFFFFFEFF);
      UserLogError(2147483892LL);
    }
    v30 = PtiCurrentShared();
    *((_DWORD *)v30 + 318) &= ~0x40u;
    v31 = -1073741801;
    ObfDereferenceObject(Object);
    return v31;
  }
  return result;
}
