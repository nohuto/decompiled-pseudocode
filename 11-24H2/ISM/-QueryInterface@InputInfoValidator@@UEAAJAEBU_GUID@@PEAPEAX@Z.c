/*
 * XREFs of ?QueryInterface@InputInfoValidator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18019C5D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x18019CA38 (McTemplateU0sqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputInfoValidator::QueryInterface(InputInfoValidator *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax

  v3 = 0;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v3 = -2147467262;
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        McTemplateU0sqq_EventWriteTransfer(
          (_DWORD)this,
          (_DWORD)a2,
          (unsigned int)"InputInfoValidator::QueryInterface",
          243,
          2);
    }
    else
    {
      (*(void (__fastcall **)(InputInfoValidator *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
  }
  else
  {
    v3 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer(
        (_DWORD)this,
        (_DWORD)a2,
        (unsigned int)"InputInfoValidator::QueryInterface",
        232,
        87);
  }
  return v3;
}
