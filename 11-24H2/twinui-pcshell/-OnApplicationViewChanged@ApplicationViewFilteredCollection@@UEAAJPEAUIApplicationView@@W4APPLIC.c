/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801F6380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180181AA0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 *     ?FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805BC2C0 (-FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewFilteredCollection::OnApplicationViewChanged(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        __int64 a4)
{
  char v7; // r14
  RTL_SRWLOCK *v8; // rdi
  __int64 i; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h]

  v16 = a4;
  v7 = 0;
  v8 = (RTL_SRWLOCK *)(a1 + 168);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 168));
  v15 = v8;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)(a1 + 72) )
      goto LABEL_9;
    if ( SHIsSameObject(*(struct IUnknown **)(*(_QWORD *)(a1 + 64) + 8 * i), a2) )
      break;
  }
  v7 = 1;
  if ( a3 == 1 )
  {
    v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(
            (__int64 *)(a1 + 64),
            (unsigned int)i);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
        (const char *)(unsigned int)v10);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
      return v11;
    }
  }
LABEL_9:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  if ( v7 )
  {
    v13 = ApplicationViewFilteredCollection::FireApplicationViewChangeNotification(a1 - 16, a2, a3, v16);
    v11 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB3,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
        (const char *)(unsigned int)v13);
    return v11;
  }
  return 0LL;
}
