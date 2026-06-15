/*
 * XREFs of ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14002EB28
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400048A8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000474C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanDoInPlace@CConnectionInstance@@QEAAHPEAV1@@Z @ 0x14002ECF4 (-CanDoInPlace@CConnectionInstance@@QEAAHPEAV1@@Z.c)
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEAPEAUIDeviceGraphConnectionBuffer@@@Z @ 0x14002F810 (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEAPEAUIDeviceGraphConnectionBuffer@@@Z.c)
 *     ?CreateConnection@CConnectionInstance@@QEAAJPEAUIDeviceGraphConnectionBuffer@@@Z @ 0x14002F938 (-CreateConnection@CConnectionInstance@@QEAAJPEAUIDeviceGraphConnectionBuffer@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::CreateAPOConnections(CPipeInstance *this)
{
  struct IDeviceGraphConnectionBuffer *v2; // rcx
  char v3; // si
  __int64 *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r15
  CConnectionInstance *v8; // r14
  struct CConnectionInstance *v9; // rdx
  int CanDoInPlace; // eax
  struct IDeviceGraphConnectionBuffer *v11; // rdx
  int Connection; // eax
  unsigned int v13; // edi
  struct IDeviceGraphConnectionBuffer *v14; // rcx
  int v15; // eax
  CConnectionInstance *v17; // rcx
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IDeviceGraphConnectionBuffer *v20; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v20 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 3) )
    v4 = (__int64 *)*((_QWORD *)this + 9);
  else
    v4 = (__int64 *)*((_QWORD *)this + 8);
LABEL_3:
  v5 = v4;
  if ( v4 )
  {
    if ( *((_DWORD *)this + 3) )
      v4 = (__int64 *)v4[1];
    else
      v4 = (__int64 *)*v4;
    v6 = *(_QWORD *)v5[2];
    if ( !v6 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = *(_QWORD **)v6;
    v8 = *(CConnectionInstance **)(v6 + 16);
    if ( v4 )
      v9 = *(struct CConnectionInstance **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)v4[2]);
    else
      v9 = 0LL;
    CanDoInPlace = CConnectionInstance::CanDoInPlace(v8, v9);
    v11 = v20;
    if ( CanDoInPlace )
    {
      if ( !v20 )
      {
        v20 = 0LL;
        v15 = CConnectionInstance::CreateConnectionBuffer(v8, &v20);
        v13 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB05,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
            (const char *)(unsigned int)v15);
          if ( v20 )
            (*(void (__fastcall **)(struct IDeviceGraphConnectionBuffer *))(*(_QWORD *)v20 + 16LL))(v20);
          return v13;
        }
        v3 = 1;
        v11 = v20;
      }
    }
    else if ( v20 )
    {
      v3 = 0;
    }
    Connection = CConnectionInstance::CreateConnection(v8, v11);
    v13 = Connection;
    if ( Connection < 0 )
    {
      v18 = 2836LL;
    }
    else
    {
      if ( !v3 )
      {
        v14 = v20;
        v20 = 0LL;
        if ( v14 )
          (*(void (__fastcall **)(struct IDeviceGraphConnectionBuffer *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      do
      {
        if ( !v7 )
        {
          v2 = v20;
          goto LABEL_3;
        }
        v17 = (CConnectionInstance *)v7[2];
        v7 = (_QWORD *)*v7;
        Connection = CConnectionInstance::CreateConnection(v17, 0LL);
        v13 = Connection;
      }
      while ( Connection >= 0 );
      v18 = 2848LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)Connection);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v20);
    return v13;
  }
  if ( v2 )
    (*(void (__fastcall **)(struct IDeviceGraphConnectionBuffer *))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
