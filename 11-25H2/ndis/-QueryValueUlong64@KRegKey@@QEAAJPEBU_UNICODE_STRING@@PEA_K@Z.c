/*
 * XREFs of ?QueryValueUlong64@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEA_K@Z @ 0x14014D280
 * Callers:
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x14016CB90 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUlong64(KRegKey *this, struct _UNICODE_STRING *a2, unsigned __int64 *a3)
{
  void *m_ptr; // rcx
  NTSTATUS result; // eax
  ULONG v6; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v7[6]; // [rsp+38h] [rbp-30h] BYREF

  m_ptr = this->m_ptr;
  v6 = 0;
  memset(v7, 0, sizeof(v7));
  result = ZwQueryValueKey(m_ptr, a2, KeyValuePartialInformation, v7, 0x18u, &v6);
  if ( result >= 0 )
  {
    if ( v7[1] == 11 )
    {
      if ( v7[2] == 8 )
      {
        *a3 = *(_QWORD *)&v7[3];
        return 0;
      }
      else
      {
        return -1073741789;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
