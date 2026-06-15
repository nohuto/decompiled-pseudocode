/*
 * XREFs of ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x14002FAB8
 * Callers:
 *     ?AddConnections@CConnectionInstance@@QEAAJPEAUIAudioProcessor@@_K@Z @ 0x14002E640 (-AddConnections@CConnectionInstance@@QEAAJPEAUIAudioProcessor@@_K@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CConnectionInstance::AddCaptureConnection(
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
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  int v24; // eax
  _QWORD *v25; // rax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 *v30; // [rsp+50h] [rbp+20h] BYREF

  v6 = *((_QWORD *)this + 4);
  if ( !v6 )
  {
    if ( *((_QWORD *)this + 3) )
      goto LABEL_9;
    v28 = 371LL;
LABEL_44:
    v23 = -2005139396;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)0x887C003CLL);
    return v23;
  }
  v7 = *(_DWORD *)(v6 + 40);
  if ( v7 == 2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL);
    v30 = (__int64 *)v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 88LL))(
           a2,
           a3,
           v8,
           *((_QWORD *)this + 1));
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17F,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)(unsigned int)v9);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v30);
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
    v28 = 400LL;
    goto LABEL_44;
  }
  v21 = *(_QWORD **)(v6 + 32);
  v30 = 0LL;
  v22 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v21)(
          *v21,
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          (__int64 *)&v30);
  v23 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18B,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v22);
    if ( v30 )
      (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
    return v23;
  }
  v24 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 104LL))(
          a2,
          a3,
          *((_QWORD *)this + 1),
          v30);
  v23 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v24);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v30);
    return v23;
  }
  v12 = (__int64)v30;
  if ( v30 )
  {
    v11 = *v30;
    goto LABEL_8;
  }
LABEL_9:
  v13 = *((_QWORD *)this + 3);
  if ( !v13 )
    return 0LL;
  v14 = *(_DWORD *)(v13 + 40);
  if ( v14 != 2 )
  {
    if ( ((v14 - 1) & 0xFFFFFFF9) == 0 && v14 != 7 )
    {
      v25 = *(_QWORD **)(v13 + 32);
      v30 = 0LL;
      v26 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v25)(
              *v25,
              &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
              (__int64 *)&v30);
      v23 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AA,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
          (const char *)(unsigned int)v26);
        if ( v30 )
          (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
      }
      else
      {
        v27 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 112LL))(
                a2,
                a3,
                *((_QWORD *)this + 1),
                v30);
        v23 = v27;
        if ( v27 >= 0 )
        {
          v19 = (__int64)v30;
          if ( !v30 )
            return 0LL;
          v18 = *v30;
          goto LABEL_16;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AB,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
          (const char *)(unsigned int)v27);
        if ( v30 )
          (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
      }
      return v23;
    }
    v28 = 431LL;
    goto LABEL_44;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 40LL);
  v30 = (__int64 *)v15;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 72LL))(
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
    (void *)0x19E,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
    (const char *)(unsigned int)v16);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v17;
}
