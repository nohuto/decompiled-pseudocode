/*
 * XREFs of ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180197B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180065CF8 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007A170 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x180198400 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::ForwardInputReport(
        MouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3,
        const char *a4)
{
  char v6; // bp
  int v7; // esi
  char v8; // al
  int v9; // eax
  int v10; // eax
  struct InputInfo *v11; // rdx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // eax
  const struct std::nothrow_t *v15; // rdx
  unsigned int v16; // esi
  const struct std::nothrow_t *v17; // rdx
  int v19; // ebx
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-38h]
  struct InputInfo *v22[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)this + 136) )
  {
    v6 = 1;
    v7 = 0;
    v8 = *((_BYTE *)this + 137);
    if ( (*((_BYTE *)this + 104) & 0x10) != 0 )
    {
      if ( v8 )
      {
        v7 = 155670;
      }
      else
      {
        v7 = 90134;
        *((_BYTE *)this + 137) = 1;
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 213) + 80LL))(
             *((_QWORD *)this + 213),
             0LL,
             166666LL);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x12A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v9,
          v21);
    }
    else if ( v8 )
    {
      v7 = 286720;
      *((_BYTE *)this + 137) = 0;
      v10 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *))(**((_QWORD **)this + 213) + 96LL))(
              *((_QWORD *)this + 213),
              a2);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x135,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v10,
          v21);
    }
    else
    {
      v6 = 0;
    }
    *((_DWORD *)a3 + 29) = 4;
    if ( v6 )
    {
      VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
        (__int64)v22,
        0x1D0uLL,
        (__int64)a3,
        a4);
      v11 = v22[0];
      *(_DWORD *)v22[0] = 8;
      v12 = *((_DWORD *)a3 + 2);
      *((_DWORD *)v11 + 2) = v12;
      v13 = *((_QWORD *)a3 + 2);
      *((_QWORD *)v11 + 2) = v13;
      *((_DWORD *)v11 + 79) = 1;
      *((_DWORD *)v11 + 80) = 2;
      *((_DWORD *)v11 + 81) = 2;
      *((_DWORD *)v11 + 83) = v7;
      *((_DWORD *)v11 + 88) = *((_DWORD *)a3 + 25);
      *((_DWORD *)v11 + 89) = *((_DWORD *)a3 + 26);
      *((_QWORD *)v11 + 46) = *((_QWORD *)v11 + 44);
      *((_DWORD *)v11 + 96) = v12;
      *((_QWORD *)v11 + 50) = v13;
      v14 = (unsigned int)InjectionDevice::Inject((MouseProcessor *)((char *)this + 144), v11);
      v16 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x156,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v14);
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v22, v17);
        return v16;
      }
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v22, v15);
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 14) + 80LL))(
            *((_QWORD *)this + 14),
            **((unsigned int **)this + 7),
            1LL);
    if ( v19 < 0 )
    {
      v20 = 348LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v19);
      return (unsigned int)v19;
    }
  }
  else if ( *((_DWORD *)a3 + 29) )
  {
    *((_DWORD *)a3 + 29) = 2 - (*((_BYTE *)a3 + 121) != 0);
  }
  else
  {
    v19 = MouseProcessor::SynthesizeMouseInput(a3);
    if ( v19 < 0 )
    {
      v20 = 363LL;
      goto LABEL_18;
    }
  }
  return 0LL;
}
