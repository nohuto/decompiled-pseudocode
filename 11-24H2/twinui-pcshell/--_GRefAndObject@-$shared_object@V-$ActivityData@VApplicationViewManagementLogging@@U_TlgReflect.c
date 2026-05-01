/*
 * XREFs of ??_GRefAndObject@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAPEAXI@Z @ 0x1800FFD04
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002EBC0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x1800306C0 (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1800FFCA4 (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 * Callees:
 *     ?Provider@ApplicationViewManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180030CDC (-Provider@ApplicationViewManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802CF088 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::`scalar deleting destructor'(
        _QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  void *v4; // rbx
  HANDLE v5; // rax
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  const struct _tlgProvider_t *v8; // rax

  v2 = (volatile signed __int32 *)a1[30];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v6 = (void *)a1[30];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v6);
    }
    a1[30] = 0LL;
    a1[31] = 0LL;
  }
  if ( *((_BYTE *)a1 + 72) )
  {
    v4 = (void *)a1[8];
    v5 = GetProcessHeap();
    HeapFree(v5, 0, v4);
    *((_BYTE *)a1 + 72) = 0;
  }
  a1[8] = 0LL;
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    *((_DWORD *)a1 + 2) = 2;
    v8 = ApplicationViewManagementLogging::Provider();
    _tlgWriteActivityAutoStop<0,5>(v8, a1 + 2);
  }
  *((_DWORD *)a1 + 2) = 3;
  operator delete(a1, (const struct std::nothrow_t *)0x110);
  return a1;
}
