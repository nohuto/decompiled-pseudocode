/*
 * XREFs of ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14003F360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140032A94 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?DisconnectFromRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@_N@Z @ 0x14003F558 (-DisconnectFromRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::DisconnectPipesFromRightSubmix(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *Next; // rax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // r15d
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *i; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+60h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v20 = v4;
  v6 = (_QWORD *)*((_QWORD *)this + 15);
  for ( i = v6; ; v6 = i )
  {
    if ( !v6 )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 9);
      while ( v7 )
      {
        v13 = (_QWORD *)v7[2];
        v7 = (_QWORD *)*v7;
        i = v13;
        if ( v13 )
          (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v13 + 72LL))(v13) )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD *, struct ISubmixInternal *))(*v13 + 64LL))(v13, a2);
          v17 = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x25C,
              (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
              (const char *)(unsigned int)v16);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&i);
            v10 = v17;
            goto LABEL_30;
          }
        }
        if ( v13 )
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      }
      if ( v4 )
        LeaveCriticalSection(v4);
      if ( *((_QWORD *)this + 3) && *((_BYTE *)this + 312) )
      {
        v8 = *(_QWORD *)a2;
        if ( *((_DWORD *)this + 64) == 2 )
          v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(v8 + 168))(a2);
        else
          v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(v8 + 160))(a2);
        v10 = v9;
        if ( v9 < 0 )
        {
          v12 = 613LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)v10);
          return v10;
        }
        *((_BYTE *)this + 312) = 0;
      }
      v10 = CFormatConverterPipe::DisconnectFromRightSubmix(
              (CSubmixImpl *)((char *)this + 272),
              a2,
              (unsigned int)(*((_DWORD *)this + 64) - 2) <= 1);
      if ( (v10 & 0x80000000) == 0 )
        return 0LL;
      v12 = 619LL;
      goto LABEL_16;
    }
    Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v5, &i);
    v15 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *))(**(_QWORD **)*Next + 144LL))(
            *(_QWORD *)*Next,
            a2);
    v10 = v15;
    if ( v15 < 0 )
      break;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x252,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v15);
LABEL_30:
  CSAutoLock<1>::~CSAutoLock<1>(&v20);
  return v10;
}
