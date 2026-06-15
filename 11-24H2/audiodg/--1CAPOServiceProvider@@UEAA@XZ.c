/*
 * XREFs of ??1CAPOServiceProvider@@UEAA@XZ @ 0x14003A1CC
 * Callers:
 *     ??_ECAPOServiceProvider@@UEAAPEAXI@Z @ 0x14003A190 (--_ECAPOServiceProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?UnlockMmcssWorkQueue@CRTThreadManager@@QEAAJK@Z @ 0x14004BE7C (-UnlockMmcssWorkQueue@CRTThreadManager@@QEAAJK@Z.c)
 */

void __fastcall CAPOServiceProvider::~CAPOServiceProvider(CAPOServiceProvider *this)
{
  bool v1; // zf
  CRTThreadManager **v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  DWORD v5; // ecx
  HRESULT v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 24) == 0;
  *(_QWORD *)this = &CAPOServiceProvider::`vftable';
  v2 = (CRTThreadManager **)((char *)this + 88);
  *((_QWORD *)this + 1) = &CAPOServiceProvider::`vftable'{for `IAudioProcessingObjectLoggingService'};
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  *((_QWORD *)this + 2) = &CAPOServiceProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectRTQueueService>'};
  if ( !v1 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v1 = *v2 == 0LL;
    v5 = *((_DWORD *)this + 24);
    v9 = v4;
    if ( v1 )
    {
      v6 = RtwqUnlockWorkQueue(v5);
      if ( v6 < 0 )
      {
        v7 = 155LL;
        goto LABEL_8;
      }
    }
    else
    {
      v6 = CRTThreadManager::UnlockMmcssWorkQueue(*v2, v5);
      if ( v6 < 0 )
      {
        v7 = 151LL;
LABEL_8:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v7,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
          (const char *)(unsigned int)v6);
      }
    }
    CSAutoLock<1>::~CSAutoLock<1>(&v9);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v2);
  DeleteCriticalSection(v4);
  *((_DWORD *)this + 7) = -1073741823;
}
