/*
 * XREFs of ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x14002E6D0
 * Callers:
 *     ?AddConnections@CConnectionInstance@@QEAAJPEAUIAudioProcessor@@_K@Z @ 0x14002E640 (-AddConnections@CConnectionInstance@@QEAAJPEAUIAudioProcessor@@_K@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CConnectionInstance::AddRenderConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rcx
  int v21; // edx
  _QWORD *v22; // rax
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 *v31; // [rsp+50h] [rbp+20h] BYREF

  v6 = *((_QWORD *)this + 4);
  if ( !v6 )
  {
    if ( !*((_QWORD *)this + 3) )
    {
      v26 = 273LL;
      goto LABEL_35;
    }
    goto LABEL_9;
  }
  v7 = *(_DWORD *)(v6 + 40);
  if ( v7 == 2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL);
    v31 = (__int64 *)v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 72LL))(
           a2,
           a3,
           v8,
           *((_QWORD *)this + 1));
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)(unsigned int)v9);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
      return v10;
    }
    if ( v8 )
    {
      v11 = *(_QWORD *)v8;
      v12 = v8;
LABEL_8:
      (*(void (__fastcall **)(__int64))(v11 + 16))(v12);
      goto LABEL_9;
    }
    goto LABEL_9;
  }
  if ( ((v7 - 1) & 0xFFFFFFFD) != 0 )
  {
    v26 = 301LL;
    goto LABEL_35;
  }
  v27 = *(_QWORD **)(v6 + 32);
  v31 = 0LL;
  v28 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v27)(
          *v27,
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          (__int64 *)&v31);
  v24 = v28;
  if ( v28 < 0 )
  {
    v29 = 296LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v28);
LABEL_46:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
    return v24;
  }
  v28 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 112LL))(
          a2,
          a3,
          *((_QWORD *)this + 1),
          v31);
  v24 = v28;
  if ( v28 < 0 )
  {
    v29 = 297LL;
    goto LABEL_44;
  }
  v12 = (__int64)v31;
  if ( v31 )
  {
    v11 = *v31;
    goto LABEL_8;
  }
LABEL_9:
  v13 = *((_QWORD *)this + 3);
  if ( !v13 )
    return 0LL;
  v14 = *(_DWORD *)(v13 + 40);
  if ( v14 != 2 )
  {
    if ( v14 <= 6 )
    {
      v21 = 74;
      if ( _bittest(&v21, v14) )
      {
        v22 = *(_QWORD **)(v13 + 32);
        v31 = 0LL;
        v23 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v22)(
                *v22,
                &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                (__int64 *)&v31);
        v24 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x147,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
            (const char *)(unsigned int)v23);
          if ( v31 )
            (*(void (__fastcall **)(__int64 *))(*v31 + 16))(v31);
          return v24;
        }
        v25 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 104LL))(
                a2,
                a3,
                *((_QWORD *)this + 1),
                v31);
        v24 = v25;
        if ( v25 >= 0 )
        {
          v19 = (__int64)v31;
          if ( !v31 )
            return 0LL;
          v18 = *v31;
          goto LABEL_16;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x148,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
          (const char *)(unsigned int)v25);
        goto LABEL_46;
      }
    }
    v26 = 332LL;
LABEL_35:
    v24 = -2005139396;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)0x887C003CLL);
    return v24;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 40LL);
  v31 = (__int64 *)v15;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 88LL))(
          a2,
          a3,
          v15,
          *((_QWORD *)this + 1));
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( v15 )
    {
      v18 = *(_QWORD *)v15;
      v19 = v15;
LABEL_16:
      (*(void (__fastcall **)(__int64))(v18 + 16))(v19);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13B,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
    (const char *)(unsigned int)v16);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v17;
}
