/*
 * XREFs of ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800823D0
 * Callers:
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x18002E4FC (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18002EAD8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180082C20 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18008445C (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x18008DF28 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     ??_GCreateMonitorContext@@QEAAPEAXI@Z @ 0x18010FA38 (--_GCreateMonitorContext@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  signed int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  unsigned int v10; // edx
  int v12; // [rsp+68h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+40h] BYREF
  __int64 v14; // [rsp+78h] [rbp+48h] BYREF

  v14 = 0LL;
  pv = 0LL;
  v12 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 66LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids);
  }
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v14);
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 24LL))(v14, &v12);
    if ( v4 >= 0 )
    {
      v5 = v12;
      if ( v12 == 1 )
      {
        if ( CMonitor::IsCaptureMonitorEnabled(a2, (unsigned __int16 **)&pv, 0LL) )
        {
LABEL_12:
          v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v7 = v6;
          if ( !v6 )
            goto LABEL_25;
          *v6 = a2;
          ((void (__fastcall *)(struct IMMDevice *))a2->lpVtbl->AddRef)(a2);
          v7[1] = this;
          if ( this )
            (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
          v7[2] = 0LL;
          if ( v7 )
          {
            ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::CreateMonitorIfAppropriateWorker, v7, 0LL);
            v7[2] = ThreadpoolWork;
            if ( ThreadpoolWork )
            {
              SubmitThreadpoolWork(ThreadpoolWork);
            }
            else
            {
              LastError = GetLastError();
              v4 = LastError;
              if ( LastError > 0 )
                v4 = (unsigned __int16)LastError | 0x80070000;
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                WPP_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  67LL,
                  &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
                  (unsigned int)v4);
              }
              CreateMonitorContext::`scalar deleting destructor'((CreateMonitorContext *)v7, v10);
            }
          }
          else
          {
LABEL_25:
            v4 = -2147024882;
          }
          goto LABEL_26;
        }
        v5 = v12;
      }
      if ( v5 || !CMonitorManager::IsRenderMirrorEnabled(this, a2, (unsigned __int16 **)&pv) )
        goto LABEL_26;
      goto LABEL_12;
    }
  }
LABEL_26:
  CoTaskMemFree(pv);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v4;
}
