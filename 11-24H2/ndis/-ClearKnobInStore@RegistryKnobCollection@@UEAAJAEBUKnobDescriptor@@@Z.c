/*
 * XREFs of ?ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z @ 0x140149EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1KnobTransaction@@QEAA@XZ @ 0x14006FED0 (--1KnobTransaction@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x140142478 (-DeleteValue@KRegKey@@QEAAJPEB_W@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::ClearKnobInStore(
        __int64 (__fastcall ***this)(RegistryKnobCollection *, __int64, KRegKey *),
        const struct KnobDescriptor *a2)
{
  __int64 (__fastcall **v2)(RegistryKnobCollection *, __int64, KRegKey *); // rax
  unsigned int v4; // ebx
  size_t v5; // r8
  ULONG v6; // r9d
  KRegKey v8[2]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  v2 = *this;
  v9 = 0;
  *(_OWORD *)&v8[0].m_ptr = 0LL;
  v4 = (*v2)((RegistryKnobCollection *)this, 2LL, v8);
  if ( !v4 )
    v4 = KRegKey::DeleteValue(v8, a2->Name, v5, v6);
  KnobTransaction::~KnobTransaction((KnobTransaction *)v8);
  return v4;
}
