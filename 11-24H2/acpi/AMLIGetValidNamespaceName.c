/*
 * XREFs of AMLIGetValidNamespaceName @ 0x14006C9BC
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x14006C1E8 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006C350 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D5F4 (AMLICreateNativeNamespaceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetValidNamespaceName(__int64 a1, int *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r10d
  int *v4; // r11
  __int64 v5; // rbx
  int v7; // [rsp+18h] [rbp+18h]

  v2 = 0;
  v7 = 1600085855;
  v3 = 0;
  v4 = a2;
  while ( v3 < 4 )
  {
    LOBYTE(a2) = *(_BYTE *)(v3 + a1);
    if ( !(_BYTE)a2 )
      break;
    if ( (unsigned __int8)((_BYTE)a2 - 48) > 0x2Fu
      || (v5 = 0x87FFFFFE03FFLL, !_bittest64(&v5, (unsigned int)((_DWORD)a2 - 48))) )
    {
      if ( (unsigned __int8)((_BYTE)a2 - 97) > 0x19u )
        return (unsigned int)-1073741811;
    }
    *((_BYTE *)&v7 + v3++) = (_BYTE)a2;
  }
  if ( *(_BYTE *)(v3 + a1) )
    return (unsigned int)-1073741811;
  if ( v4 )
    *v4 = v7;
  return v2;
}
