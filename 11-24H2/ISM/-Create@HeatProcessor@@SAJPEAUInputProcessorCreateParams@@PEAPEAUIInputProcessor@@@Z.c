/*
 * XREFs of ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801B9030
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801B9188 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 */

__int64 __fastcall HeatProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = RefCountedObject::operator new(0x68uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = *(_QWORD *)a1;
    v4[3] = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 8) = 1;
    v4[1] = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
    v4[2] = &NonPointerProcessor::`vftable'{for `IInputFocusListener'};
    v4[3] = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
    v4[7] = 0LL;
    v4[8] = 0LL;
    *((_BYTE *)v4 + 72) = 0;
    v4[6] = v7;
    v4[5] = v6;
    v4[10] = 0LL;
    *v4 = &HeatProcessor::`vftable';
    v4[1] = &HeatProcessor::`vftable'{for `IInputProcessor'};
    v4[2] = &HeatProcessor::`vftable'{for `IInputFocusListener'};
    v4[3] = &HeatProcessor::`vftable'{for `RefCountedObject'};
    v4[11] = 0LL;
    v4[12] = 0LL;
    v8 = HeatProcessor::Initialize(
           (HeatProcessor *)v4,
           *(struct DeviceInfo **)a1,
           *((struct IInputProcessorHost **)a1 + 1));
    v9 = v8;
    if ( v8 >= 0 )
    {
      *a2 = (struct IInputProcessor *)((unsigned __int64)(v5 + 1) & -(__int64)(v5 != 0LL));
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x76,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
