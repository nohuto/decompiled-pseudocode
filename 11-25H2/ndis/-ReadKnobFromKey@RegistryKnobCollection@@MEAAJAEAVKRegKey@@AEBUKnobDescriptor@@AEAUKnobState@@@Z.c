/*
 * XREFs of ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x14016CB90
 * Callers:
 *     ?ReadKnobFromKey@ExecutionContextCpuKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140154B40 (-ReadKnobFromKey@ExecutionContextCpuKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKn.c)
 *     ?ReadKnobFromKey@InterfaceProfileKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x14016CB60 (-ReadKnobFromKey@InterfaceProfileKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobS.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1400881B0 (WPP_RECORDER_SF_Sd.c)
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     ?QueryValueUlong64@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEA_K@Z @ 0x14014D280 (-QueryValueUlong64@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEA_K@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x14016CCE0 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x14016CD90 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::ReadKnobFromKey(
        RegistryKnobCollection *this,
        KRegKey *a2,
        const struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  ConfigKnobFlag Flags; // eax
  unsigned int v5; // edi
  const wchar_t *Name; // rdx
  NTSTATUS inited; // ebx
  NTSTATUS v13; // eax
  unsigned __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING v15; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+18h] BYREF

  Flags = a3->Flags;
  v5 = 0;
  v14 = 0LL;
  Name = a3->Name;
  v15 = 0LL;
  if ( (Flags & 4) != 0 )
  {
    inited = RtlUnicodeStringInitWorker(&v15, Name, (const size_t)a3, (ULONG)a4);
    if ( inited < 0 )
      goto LABEL_6;
    inited = KRegKey::QueryValueUlong64(a2, &v15, &v14);
  }
  else
  {
    v16 = 0;
    inited = RtlUnicodeStringInitWorker(&v15, Name, (const size_t)a3, (ULONG)a4);
    if ( inited >= 0 )
    {
      v13 = KRegKey::QueryValueUlong(a2, &v15, &v16);
      v5 = v16;
      inited = v13;
    }
    v14 = v5;
  }
  if ( !inited )
  {
    inited = KnobCollection::ValidateKnobValue(this, &v14, a3);
    if ( !inited )
    {
      *(_QWORD *)a4 = v14;
      return 0LL;
    }
  }
LABEL_6:
  if ( inited == -1073741772 )
    return 3221226021LL;
  if ( inited == -1073741789 || inited == -1073741788 || inited == -1073739509 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_5727a9fad38f371d27467642e4002c95_Traceguids,
        a3->Name,
        inited);
    return 3221226021LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_5727a9fad38f371d27467642e4002c95_Traceguids,
      a3->Name,
      inited);
  return (unsigned int)inited;
}
