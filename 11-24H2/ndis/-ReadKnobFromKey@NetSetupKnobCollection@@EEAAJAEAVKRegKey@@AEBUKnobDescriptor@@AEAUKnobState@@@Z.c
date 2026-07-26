/*
 * XREFs of ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x14014A150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x14015C4A0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015C580 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015C750 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x140160CF0 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 */

__int64 __fastcall NetSetupKnobCollection::ReadKnobFromKey(
        NetSetupKnobCollection *this,
        struct KRegKey *a2,
        const struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  const wchar_t *Name; // rbx
  __int128 v8; // xmm0
  int v9; // eax
  ConfigKnobFlag Flags; // eax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  bool v14; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-3Ch] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h] BYREF
  struct KRegKey *v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+38h] [rbp-28h] BYREF
  int v19; // [rsp+48h] [rbp-18h]

  v16 = 0LL;
  if ( !a2->m_ptr )
    return 3221226021LL;
  Name = a3->Name;
  v17 = a2;
  if ( _wcsicmp(Name, L"NETSETUPPKEY_Operational_ExecutionContextProfile") )
  {
    if ( !_wcsicmp(Name, L"NETSETUPPKEY_Operational_ExecutionContextProfileSource") )
    {
      v8 = NETSETUPPKEY_Operational_ExecutionContextProfileSource;
      v9 = 402;
      goto LABEL_6;
    }
    return 3221226021LL;
  }
  v8 = NETSETUPPKEY_Operational_ExecutionContextProfile;
  v9 = 400;
LABEL_6:
  v19 = v9;
  Flags = a3->Flags;
  v18 = v8;
  if ( (Flags & 4) != 0 )
  {
    v11 = NetSetupPropertyBag::ReadUint64((NetSetupPropertyBag *)&v17, (const struct _NETSETUPPROPKEY *)&v18, &v16);
  }
  else
  {
    if ( (Flags & 2) != 0 )
    {
      v14 = 0;
      v11 = NetSetupPropertyBag::ReadBoolean((NetSetupPropertyBag *)&v17, (const struct _NETSETUPPROPKEY *)&v18, &v14);
      v12 = v14;
    }
    else
    {
      v15 = 0;
      v11 = NetSetupPropertyBag::ReadUint32((NetSetupPropertyBag *)&v17, (const struct _NETSETUPPROPKEY *)&v18, &v15);
      v12 = v15;
    }
    v16 = v12;
  }
  if ( !v11 )
  {
    v11 = KnobCollection::ValidateKnobValue(this, &v16, a3);
    if ( !v11 )
      *(_QWORD *)a4 = v16;
  }
  return v11;
}
