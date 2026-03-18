/*
 * XREFs of ?DisplayID_GetContainerID@@YAJPEBUDisplayIDObj@@PEAU_GUID@@@Z @ 0x140094D18
 * Callers:
 *     ?GetContainerId@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x140279800 (-GetContainerId@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetContainerID(const struct DisplayIDObj *a1, struct _GUID *a2)
{
  _BYTE *v3; // r9
  int v4; // r11d
  unsigned int v5; // ebx
  _BYTE *i; // r8
  int v7; // eax
  unsigned int v8; // edi
  struct _GUID *v9; // rcx
  __int64 v10; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v3 = *(_BYTE **)a1;
  v4 = 0;
LABEL_6:
  if ( v4 >= *((_DWORD *)a1 + 5) || (*v3 & 0xF0) != 0x20 )
    return 3221225659LL;
  v5 = (unsigned __int8)v3[1];
  for ( i = (_BYTE *)((unsigned __int64)(v3 + 4) & -(__int64)(v3[1] != 0)); ; i += v8 )
  {
    if ( v5 < 3 || !*i || (v7 = (unsigned __int8)i[2], v8 = v7 + 3, (int)v5 < v7 + 3) )
    {
      v3 += (unsigned __int8)(v3[1] + 5);
      ++v4;
      goto LABEL_6;
    }
    if ( *i == 41 )
      break;
    v5 -= v8;
  }
  if ( (_BYTE)v7 != 16 )
    return 3221225659LL;
  v9 = a2;
  if ( a2 < &a2[1] )
  {
    v10 = i - (_BYTE *)a2;
    do
    {
      LOBYTE(v9->Data1) = *((_BYTE *)&v9->Data1 + v10 + 3);
      v9 = (struct _GUID *)((char *)v9 + 1);
    }
    while ( v9 < &a2[1] );
  }
  a2->Data1 = _byteswap_ulong(a2->Data1);
  a2->Data2 = __ROR2__(a2->Data2, 8);
  a2->Data3 = __ROR2__(a2->Data3, 8);
  return 0LL;
}
