/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x14008B1B4
 * Callers:
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x14008ADFC (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14008BA98 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     CallMonitor @ 0x14008C1A0 (CallMonitor.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a2)
{
  OPM::CMutex *v2; // rbx
  unsigned int v5; // edi
  _QWORD *Pool2; // rax
  void *v7; // r8
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (OPM::CMutex *)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v2);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v5 = -1071774438;
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(258LL, 264LL, 1297108807LL);
    v12 = Pool2;
    v7 = Pool2;
    if ( Pool2 )
    {
      v8 = 2LL;
      *Pool2 = *((_QWORD *)this + 9);
      v9 = Pool2 + 1;
      do
      {
        *v9 = *(_OWORD *)a2->abEncryptedParameters;
        v9[1] = *(_OWORD *)&a2->abEncryptedParameters[16];
        v9[2] = *(_OWORD *)&a2->abEncryptedParameters[32];
        v9[3] = *(_OWORD *)&a2->abEncryptedParameters[48];
        v9[4] = *(_OWORD *)&a2->abEncryptedParameters[64];
        v9[5] = *(_OWORD *)&a2->abEncryptedParameters[80];
        v9[6] = *(_OWORD *)&a2->abEncryptedParameters[96];
        v9 += 8;
        v10 = *(_OWORD *)&a2->abEncryptedParameters[112];
        a2 = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const)((char *)a2 + 128);
        *(v9 - 1) = v10;
        --v8;
      }
      while ( v8 );
      v5 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232493u, v7, 0x108u, 0LL, 0);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v12);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v12);
      v5 = -1073741801;
    }
  }
  OPM::CMutex::Unlock(v2);
  return v5;
}
