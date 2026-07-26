/*
 * XREFs of ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x140149F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1KnobTransaction@@QEAA@XZ @ 0x14006FED0 (--1KnobTransaction@@QEAA@XZ.c)
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x140135FF0 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x140160CF0 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::SetKnobInStore(
        RegistryKnobCollection *this,
        const struct KnobDescriptor *a2,
        unsigned __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  NTSTATUS inited; // eax
  size_t v9; // r8
  ULONG v10; // r9d
  const wchar_t *Name; // rdx
  unsigned __int64 v12; // rdi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle[2]; // [rsp+40h] [rbp-20h] BYREF
  char v15; // [rsp+50h] [rbp-10h]
  unsigned __int64 v16; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 Data; // [rsp+98h] [rbp+38h] BYREF

  v16 = a3;
  v4 = 0;
  v15 = 0;
  *(_OWORD *)KeyHandle = 0LL;
  v6 = KnobCollection::ValidateKnobValue(this, &v16, a2);
  if ( v6 )
  {
    KnobTransaction::~KnobTransaction((KnobTransaction *)KeyHandle);
    return v6;
  }
  inited = (**(__int64 (__fastcall ***)(RegistryKnobCollection *, __int64, HANDLE *))this)(this, 2LL, KeyHandle);
  if ( inited )
    goto LABEL_9;
  Name = a2->Name;
  if ( (a2->Flags & 4) != 0 )
  {
    v12 = v16;
    DestinationString = 0LL;
    inited = RtlUnicodeStringInitWorker(&DestinationString, Name, v9, v10);
    if ( inited < 0 )
    {
LABEL_9:
      v4 = inited;
      goto LABEL_10;
    }
    Data = v12;
    inited = ZwSetValueKey(KeyHandle[0], &DestinationString, 0, 0xBu, &Data, 8u);
  }
  else
  {
    inited = KRegKey::SetValueUlong((KRegKey *)KeyHandle, Name, (unsigned int)v16, v10);
  }
  if ( inited )
    goto LABEL_9;
LABEL_10:
  KnobTransaction::~KnobTransaction((KnobTransaction *)KeyHandle);
  return v4;
}
