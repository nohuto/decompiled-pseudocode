/*
 * XREFs of UsbhGetHubPdoName @ 0x1400223E4
 * Callers:
 *     UsbhIoctlGetNodeConnectionName @ 0x1400213E0 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhFdoReturnHubName @ 0x140040438 (UsbhFdoReturnHubName.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     memmove @ 0x140061040 (memmove.c)
 *     memset @ 0x140061340 (memset.c)
 */

__int64 __fastcall UsbhGetHubPdoName(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, unsigned int *a5)
{
  size_t v5; // rdi
  _DWORD *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  _WORD *v12; // rax
  unsigned int v13; // esi
  _WORD *v14; // rsi
  __int16 v15; // ax
  unsigned int v16; // ebx
  size_t v17; // r8
  _WORD *v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx

  v5 = a4;
  FdoExt(a1);
  v9 = PdoExt(a2);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1047424615;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a3;
        *(_QWORD *)(v11 + 24) = v5;
      }
    }
  }
  *a5 = 0;
  if ( !a3 )
    return 3221225485LL;
  if ( (unsigned int)v5 < 6 )
    return 3221225507LL;
  if ( (v9[355] & 0xC) == 0xC )
  {
    v12 = (_WORD *)*((_QWORD *)v9 + 151);
    v13 = 0;
    if ( *v12 == 92 )
    {
      v14 = v12 + 1;
      v15 = v12[1];
      if ( v15 == 92 )
        goto LABEL_13;
      do
      {
        if ( !v15 )
          break;
        v15 = *++v14;
      }
      while ( *v14 != 92 );
      if ( *v14 == 92 )
LABEL_13:
        LODWORD(v14) = (_DWORD)v14 + 2;
      v13 = (_DWORD)v14 - v9[302];
    }
    v16 = *((unsigned __int16 *)v9 + 600) - v13;
    memset(a3, 0, v5);
    v17 = v16;
    v18 = a3 + 2;
    v19 = v16 + 6;
    if ( v5 >= v17 + 6 )
    {
      memmove(v18, (const void *)(*((_QWORD *)v9 + 151) + 2 * ((unsigned __int64)v13 >> 1)), v17);
      *a5 = v19;
      *(_DWORD *)a3 = v19;
    }
    else
    {
      *(_DWORD *)a3 = v19;
      *v18 = 0;
      *a5 = 6;
    }
  }
  else
  {
    *(_DWORD *)a3 = 6;
    a3[2] = 0;
    *a5 = 6;
  }
  v20 = *a5;
  if ( (UsbhLogMask & 8) != 0 && a1 )
  {
    v21 = *(_QWORD *)(a1 + 64);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v22 = 1013870183;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = v20;
      *(_QWORD *)(v22 + 24) = 0LL;
    }
  }
  return 0LL;
}
