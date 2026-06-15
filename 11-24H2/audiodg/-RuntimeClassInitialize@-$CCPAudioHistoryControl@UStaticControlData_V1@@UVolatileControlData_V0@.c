/*
 * XREFs of ?RuntimeClassInitialize@?$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAAJPEAUICrossProcessMemory@@@Z @ 0x14007FFA4
 * Callers:
 *     ??$MakeAndInitialize@V?$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Z @ 0x14007F940 (--$MakeAndInitialize@V-$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005738C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCPAudioHistoryControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::RuntimeClassInitialize(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  int v4; // eax
  const char *v5; // r9
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a2;
  v12 = 0LL;
  v11 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64 *))(v2 + 32))(a2, &v11, &v12);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8 = v12;
    if ( v12 )
    {
      v9 = *(unsigned int *)(v12 + 356);
      if ( (_DWORD)v9 )
      {
        *(_DWORD *)(a1 + 44) = *(unsigned __int16 *)(v12 + 396);
        *(_DWORD *)(a1 + 48) = *(_DWORD *)(v8 + 388);
        *(_DWORD *)(a1 + 52) = *(_DWORD *)(v8 + 336);
        *(_QWORD *)(a1 + 56) = *(_QWORD *)(v8 + 340);
        *(_QWORD *)(a1 + 32) = v8 + 8;
        *(_QWORD *)(a1 + 16) = v8 + v9;
        result = 0LL;
        *(_QWORD *)(a1 + 24) = v8;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x41,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
          (const char *)0x80070057LL);
        return 2147942487LL;
      }
    }
    else
    {
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x3C,
               (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
               v5);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
      (const char *)(unsigned int)v4);
    return v6;
  }
  return result;
}
