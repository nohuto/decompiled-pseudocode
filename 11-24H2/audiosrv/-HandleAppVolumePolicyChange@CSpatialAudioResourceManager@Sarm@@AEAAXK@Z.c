/*
 * XREFs of ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x18012075C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1d89632f3144689dba3d227faae4cbd9__void_::_Do_call @ 0x1801227A0 (std--_Func_impl_no_alloc__lambda_1d89632f3144689dba3d227faae4cbd9__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18004DFD0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004FBEC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x18009F010 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1801205F4 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1801206B8 (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180122068 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x18012313C (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x180123B94 (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange(
        Sarm::CSpatialAudioResourceManager *this,
        unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  struct Sarm::CStreamResource *FirstStream; // rsi
  __int64 v6; // r8
  const char *v7; // r9
  char v8; // bl
  struct Sarm::CStreamResource *i; // rax
  unsigned int v10; // edx
  unsigned int v11; // eax
  Sarm::CStreamResource *v12; // rbx
  struct IAudioProcess *v13; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v14 = v4;
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange", 800);
  FirstStream = Sarm::CSpatialAudioResourceManager::GetFirstStream(this, a2);
  if ( FirstStream )
  {
    v13 = 0LL;
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset((__int64 *)&v13);
    v8 = (int)Sarm::CStreamResource::GetProcess(FirstStream, &v13, v6, v7) >= 0
      && (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v13 + 120LL))(v13) == 1;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
    if ( v8 != *((_BYTE *)FirstStream + 88) )
    {
      *((_BYTE *)FirstStream + 88) = v8;
      if ( v8 )
      {
        Sarm::CSpatialAudioResourceManager::RevokeApplicationResources(this, a2);
      }
      else
      {
        for ( i = Sarm::CSpatialAudioResourceManager::GetFirstStream(this, a2);
              ;
              i = Sarm::CSpatialAudioResourceManager::GetNextStream(this) )
        {
          v12 = i;
          if ( !i )
            break;
          v10 = *((_DWORD *)i + 19);
          if ( v10 )
          {
            v11 = Sarm::CStreamResource::CalculateDynamicObjectGrantCount(i, v10);
            Sarm::CStreamResource::SetDynamicObjects(v12, v11, 0LL);
          }
        }
      }
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
