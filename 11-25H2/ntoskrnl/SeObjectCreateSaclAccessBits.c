/*
 * XREFs of SeObjectCreateSaclAccessBits @ 0x140A2EC60
 * Callers:
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     ObpAdjustAccessMask @ 0x1409196D0 (ObpAdjustAccessMask.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall SeObjectCreateSaclAccessBits(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // ax
  ULONG v2; // edx
  __int64 v4; // rax
  char *v5; // rax
  char *v6; // rcx
  unsigned int i; // r9d

  v1 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v1 & 0x10) == 0 )
    return 0x1000000;
  v2 = 0;
  if ( v1 >= 0 )
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v4 )
      return 0x1000000;
    v5 = (char *)SecurityDescriptor + v4;
  }
  if ( !v5 )
    return 0x1000000;
  v6 = v5 + 8;
  for ( i = 0; i < *((unsigned __int16 *)v5 + 2); ++i )
  {
    if ( (unsigned __int8)(*v6 - 17) > 1u && (unsigned __int8)(*v6 - 20) > 1u )
      return 0x1000000;
    v6 += *((unsigned __int16 *)v6 + 1);
  }
  return v2;
}
