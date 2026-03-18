/*
 * XREFs of ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1403ED588
 * Callers:
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1404115E8 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x14002728C (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@Z @ 0x140050598 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E1840 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 */

__int64 __fastcall DXGSESSIONDATA::SendCachedIddDisplayConfigRequest(DXGSESSIONDATA *this)
{
  __int64 v2; // rax
  int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  ReferenceCounted *v8; // [rsp+40h] [rbp-49h] BYREF
  union _LARGE_INTEGER v9; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v11[24]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v12[88]; // [rsp+70h] [rbp-19h] BYREF

  v8 = 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONDATA *)((char *)this + 19040), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v2 = *((_QWORD *)this + 2387);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset(&v8, *((ReferenceCounted **)this + 2387));
    v4 = *((_DWORD *)this + 4772);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
    v9.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
    memset(v12, 0, sizeof(v12));
    v10 = 88LL;
    v5 = DispBrokerClient::SendDisplayBrokerMessage(
           (DXGSESSIONDATA *)((char *)this + 18984),
           0x120000u,
           (struct _PORT_MESSAGE *)(((unsigned __int64)v8 + 16) & -(__int64)(v8 != 0LL)),
           0LL,
           (struct _PORT_MESSAGE *)v12,
           &v10,
           0LL,
           &v9);
    if ( v5 == 192 )
    {
      v6 = *(unsigned int *)this;
      v7 = -1073741749;
      WdLogSingleEntry2(3LL, v6, -1073741749LL);
      WdLogGlobalForLineNumber = 1781;
    }
    else
    {
      if ( v5 >= 0 )
      {
        v5 = *(_DWORD *)&v12[80];
        if ( *(int *)&v12[80] >= 0 )
        {
          DXGSESSIONDATA::SetDisplayConfigDone(this, v4);
          v5 = *(_DWORD *)&v12[80];
        }
      }
      v7 = v5;
    }
    auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset(&v8, 0LL);
    return v7;
  }
  else
  {
    WdLogSingleEntry1(4LL, *(unsigned int *)this);
    WdLogGlobalForLineNumber = 1748;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
    return 0LL;
  }
}
