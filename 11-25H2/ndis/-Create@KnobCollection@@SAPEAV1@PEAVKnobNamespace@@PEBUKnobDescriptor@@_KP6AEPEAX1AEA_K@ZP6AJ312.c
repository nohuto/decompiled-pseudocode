/*
 * XREFs of ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x14016E0A0
 * Callers:
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x14016DE60 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x140099960 (--$-0$00X@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ??$MakeSizedPoolPtr@VExecutionContextCpuKnobCollection@@@@YA?AV?$unique_ptr@VExecutionContextCpuKnobCollection@@U?$KFreePool@VExecutionContextCpuKnobCollection@@@@@wistd@@K_K@Z @ 0x1401544EC (--$MakeSizedPoolPtr@VExecutionContextCpuKnobCollection@@@@YA-AV-$unique_ptr@VExecutionContextCpu.c)
 *     ??$MakeSizedPoolPtr@VInterfaceProfileKnobCollection@@@@YA?AV?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@K_K@Z @ 0x140154570 (--$MakeSizedPoolPtr@VInterfaceProfileKnobCollection@@@@YA-AV-$unique_ptr@VInterfaceProfileKnobCo.c)
 *     ??$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA?AV?$unique_ptr@VNetSetupKnobCollection@@U?$KFreePool@VNetSetupKnobCollection@@@@@wistd@@K_K@Z @ 0x1401545F4 (--$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA-AV-$unique_ptr@VNetSetupKnobCollection@@U-$KFr.c)
 *     ??$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA?AV?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@K_K@Z @ 0x14016E4A0 (--$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA-AV-$unique_ptr@VRegistryKnobCollection@@U-$KFr.c)
 */

struct KnobCollection *__fastcall KnobCollection::Create(
        struct KnobNamespace *a1,
        const struct KnobDescriptor *a2,
        __int64 a3,
        unsigned __int8 (*a4)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a5)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  __int64 v8; // rdx
  __int64 v9; // r8
  _CONFIG_KNOB_NAMESPACE_TYPE NamespaceType; // r9d
  __int32 v11; // r9d
  __int32 v12; // r9d
  void **SizedPool; // rax
  void *v14; // rdx
  int v15; // edx
  PVOID v16; // rcx
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  PVOID v19; // rcx
  PVOID v20; // rcx
  int (*v22)(void *, const struct KnobDescriptor *, unsigned __int64); // rax
  _QWORD *v23; // rcx
  unsigned __int64 *p_DefaultValue; // r14
  unsigned __int64 v25; // rax
  PVOID P; // [rsp+60h] [rbp+30h] BYREF
  PVOID v27; // [rsp+78h] [rbp+48h] BYREF

  v27 = a4;
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&v27);
  NamespaceType = a1->m_id.NamespaceType;
  if ( NamespaceType )
  {
    v11 = NamespaceType - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          NT_ASSERT("false");
        SizedPool = (void **)MakeSizedPoolPtr<ExecutionContextCpuKnobCollection>(&P, v8, v9);
      }
      else
      {
        SizedPool = (void **)MakeSizedPoolPtr<InterfaceProfileKnobCollection>(&P, v8, v9);
      }
    }
    else
    {
      SizedPool = (void **)MakeSizedPoolPtr<NetSetupKnobCollection>(&P, v8, v9);
    }
    v14 = *SizedPool;
    *SizedPool = 0LL;
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&v27, v14);
    v16 = P;
    P = 0LL;
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    v17 = v27;
  }
  else
  {
    v18 = (_QWORD *)MakeSizedPoolPtr<RegistryKnobCollection>(&P);
    v19 = v27;
    v17 = (_QWORD *)*v18;
    *v18 = 0LL;
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    v20 = P;
    P = 0LL;
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
  }
  if ( v17 )
  {
    v22 = a5;
    v17[8] = a2;
    v17[7] = a3;
    v17[3] = a1;
    v17[4] = 0LL;
    v17[5] = v22;
    v17[6] = 0LL;
    if ( a3 )
    {
      v23 = v17 + 9;
      p_DefaultValue = &a2->DefaultValue;
      do
      {
        *((_DWORD *)v23 + 2) = 0;
        v23 += 3;
        v25 = *p_DefaultValue;
        p_DefaultValue += 6;
        *(v23 - 3) = v25;
        *((_DWORD *)v23 - 3) = 1;
        --a3;
      }
      while ( a3 );
    }
    v27 = 0LL;
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&v27, 0LL);
    return (struct KnobCollection *)v17;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v15,
        1,
        10,
        (struct _GUID *)&WPP_0d3df21b34c634c4ec6d6bcb69b42c7f_Traceguids);
    }
    return 0LL;
  }
}
