/*
 * XREFs of PiDevCfgConfigurePropertyMatchCallback @ 0x140726C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PiDevCfgConfigurePropertyMatchCallback(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v3; // rdx
  DEVPROPKEY *v4; // r10
  __int64 v5; // r9
  __int64 i; // rdx
  __int64 v7; // r10
  __int64 v8; // r9

  v2 = 1;
  if ( (*(_DWORD *)(a2 + 104) & 2) == 0 )
  {
    v3 = *(_QWORD *)a1 - *(_QWORD *)off_140FD8780[0];
    if ( *(_QWORD *)a1 == *(_QWORD *)off_140FD8780[0] )
      v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)off_140FD8780[0]->fmtid.Data4;
    if ( !v3 )
    {
      while ( (unsigned int)v3 < 0xA )
      {
        v4 = off_140FD8780[v3];
        if ( v4->pid == *(_DWORD *)(a1 + 16) )
        {
          v5 = *(_QWORD *)&v4->fmtid.Data1 - *(_QWORD *)a1;
          if ( *(_QWORD *)&v4->fmtid.Data1 == *(_QWORD *)a1 )
            v5 = *(_QWORD *)v4->fmtid.Data4 - *(_QWORD *)(a1 + 8);
          if ( !v5 )
            return 0;
        }
        v3 = (unsigned int)(v3 + 1);
      }
    }
  }
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    v7 = (__int64)*(&off_140FD82A8 + i);
    if ( *(_DWORD *)(v7 + 16) == *(_DWORD *)(a1 + 16) )
    {
      v8 = *(_QWORD *)v7 - *(_QWORD *)a1;
      if ( *(_QWORD *)v7 == *(_QWORD *)a1 )
        v8 = *(_QWORD *)(v7 + 8) - *(_QWORD *)(a1 + 8);
      if ( !v8 )
        return 0;
    }
  }
  return v2;
}
