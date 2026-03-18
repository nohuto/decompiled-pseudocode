/*
 * XREFs of ?RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x14007ADC8
 * Callers:
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1402254CC (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x140070730 (RtlUnicodeStringValidateWorker_0.c)
 */

__int64 __fastcall RtlUnicodeStringCchCatStringN(struct _UNICODE_STRING *a1, const unsigned __int16 *a2, ULONG a3)
{
  unsigned __int16 *v3; // rcx
  NTSTATUS v4; // r10d
  _WORD *v5; // r11
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  _WORD *v9; // rbx
  __int16 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // r8

  v4 = RtlUnicodeStringValidateWorker_0(a1, (const size_t)a2, a3);
  if ( v4 >= 0 && v3 )
  {
    v6 = *((_QWORD *)v3 + 1);
    v7 = (unsigned __int64)v3[1] >> 1;
    v8 = (unsigned __int64)*v3 >> 1;
  }
  else
  {
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  v9 = (_WORD *)(v6 + 2 * v8);
  v10 = 0;
  v11 = 1LL;
  v4 = 0;
  v12 = v7 - v8;
  if ( v12 )
  {
    while ( v11 )
    {
      if ( *v5 )
      {
        *v9++ = *v5++;
        --v11;
        ++v10;
        if ( --v12 )
          continue;
      }
      if ( v12 || !v11 )
        break;
      goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    if ( *v5 )
      v4 = -2147483643;
  }
  *v3 = 2 * (v10 + v8);
  return (unsigned int)v4;
}
