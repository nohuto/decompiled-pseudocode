/*
 * XREFs of ?VidSchiSetupKnownProcessBoost@@YAJPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PROCESS@@PEAUVIDSCH_PROCESS_ADAPTER_INFO@@@Z @ 0x1400414C8
 * Callers:
 *     VidSchiOpenProcessAdapterInfo @ 0x1400D8678 (VidSchiOpenProcessAdapterInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$00@@QEAAPEAEI@Z @ 0x1400A4DBC (-AllocateElements@-$PagedPoolZeroedArray@E$00@@QEAAPEAEI@Z.c)
 */

__int64 __fastcall VidSchiSetupKnownProcessBoost(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PROCESS *a2,
        struct VIDSCH_PROCESS_ADAPTER_INFO *a3)
{
  const char *v5; // rcx
  char v6; // r14
  char v7; // di
  int v9; // ebx
  ULONG v10; // eax
  void *v11; // rax
  void *v12; // rbx
  _BYTE v13[4]; // [rsp+20h] [rbp-30h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+24h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v16[4]; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+3Ch] [rbp-14h]

  if ( !*((_BYTE *)a1 + 7061) )
    return 0LL;
  if ( *((_QWORD *)a2 + 332) != PsGetCurrentProcess() )
    return 0LL;
  v5 = (const char *)*((_QWORD *)a2 + 331);
  if ( !v5 )
    return 0LL;
  v6 = 0;
  v7 = 0;
  if ( !_strnicmp(v5, "audiodg.exe", 0xBuLL) )
  {
    v6 = 1;
  }
  else
  {
    if ( _strnicmp(*((const char **)a2 + 331), "svchost.exe", 0xBuLL) )
      return 0LL;
    v7 = 1;
  }
  v13[0] = 0;
  v9 = RtlCheckTokenMembership(0LL, SeExports->SeLocalServiceSid, v13);
  if ( v9 >= 0 && v13[0] )
  {
    if ( v7 )
    {
      P = 0LL;
      v17 = 0;
      v10 = RtlLengthRequiredSid(6u);
      v11 = (void *)PagedPoolZeroedArray<unsigned char,1>::AllocateElements(&P, v10);
      v12 = v11;
      if ( !v11 )
      {
        v9 = -1073741801;
        goto LABEL_15;
      }
      *(_DWORD *)IdentifierAuthority.Value = 0;
      *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
      RtlInitializeSid(v11, &IdentifierAuthority, 6u);
      *RtlSubAuthoritySid(v12, 0) = 80;
      *RtlSubAuthoritySid(v12, 1u) = -379073292;
      *RtlSubAuthoritySid(v12, 2u) = 2104103821;
      *RtlSubAuthoritySid(v12, 3u) = -1247697674;
      *RtlSubAuthoritySid(v12, 4u) = 1811662266;
      *RtlSubAuthoritySid(v12, 5u) = 774708259;
      v9 = RtlCheckTokenMembership(0LL, v12, v13);
      if ( v9 < 0 || !v13[0] )
      {
        v9 = 0;
LABEL_15:
        if ( P != v16 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        return (unsigned int)v9;
      }
      if ( P != v16 && P )
        ExFreePoolWithTag(P, 0);
    }
    *((_BYTE *)a3 + 5) = v6;
    *((_BYTE *)a3 + 4) = v7;
  }
  else
  {
    return 0;
  }
  return (unsigned int)v9;
}
