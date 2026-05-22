/*
 * XREFs of ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x18017AF40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180030BEC (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180065CF8 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007A170 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::InjectManipulationInput(
        ControllerProcessor *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  DWORD TickCount; // ebx
  unsigned int SizeForPointerCount; // eax
  __int64 v8; // r8
  const char *v9; // r9
  struct InputInfo *v10; // rdx
  _OWORD *v11; // r8
  char *v12; // rdi
  __int64 v13; // r9
  char *v14; // rax
  int v15; // eax
  const struct std::nothrow_t *v16; // rdx
  unsigned int v17; // ebx
  struct InputInfo *v19[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  TickCount = GetTickCount();
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  SizeForPointerCount = PointerInputInfo::GetSizeForPointerCount(a2);
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
    (__int64)v19,
    SizeForPointerCount,
    v8,
    v9);
  v10 = v19[0];
  *(_DWORD *)v19[0] = 8;
  *((_DWORD *)v10 + 2) = TickCount;
  *((LARGE_INTEGER *)v10 + 2) = PerformanceCount;
  *((_QWORD *)v10 + 4) = *((_QWORD *)this + 28);
  *((_DWORD *)v10 + 79) = a2;
  if ( a2 )
  {
    v11 = (_OWORD *)((char *)v10 + 384);
    v12 = (char *)(a3 - v10);
    v13 = a2;
    do
    {
      v14 = &v12[(_QWORD)v11 - 384];
      *(v11 - 4) = *(_OWORD *)v14;
      *(v11 - 3) = *((_OWORD *)v14 + 1);
      *(v11 - 2) = *((_OWORD *)v14 + 2);
      *(v11 - 1) = *((_OWORD *)v14 + 3);
      *v11 = *((_OWORD *)v14 + 4);
      v11[1] = *((_OWORD *)v14 + 5);
      v11[2] = *((_OWORD *)v14 + 6);
      v11[3] = *((_OWORD *)v14 + 7);
      v11[4] = *((_OWORD *)v14 + 8);
      *(_DWORD *)v11 = *((_DWORD *)v10 + 2);
      *((_QWORD *)v11 + 2) = *((_QWORD *)v10 + 2);
      v11 += 9;
      --v13;
    }
    while ( v13 );
  }
  v15 = (unsigned int)InjectionDevice::Inject((ControllerProcessor *)((char *)this + 4312), v10);
  v17 = v15;
  if ( v15 >= 0 )
    v17 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v15);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v19, v16);
  return v17;
}
