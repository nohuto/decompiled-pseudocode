/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x14011C730
 * Callers:
 *     ClientGetListboxString @ 0x140089900 (ClientGetListboxString.c)
 *     xxxClientLoadStringW @ 0x140114990 (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x140133BCC (xxxClientExpandStringW.c)
 *     SfnOUTSTRING @ 0x140176180 (SfnOUTSTRING.c)
 *     SfnINCNTOUTSTRING @ 0x1401F4340 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402B8A10 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     WCSToMBEx @ 0x14011C884 (WCSToMBEx.c)
 *     strncpycch @ 0x14011C940 (strncpycch.c)
 *     MBToWCSEx @ 0x14011C96C (MBToWCSEx.c)
 */

void __fastcall CopyOutputString(volatile void **a1, struct _LARGE_STRING *a2, int a3, int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int16 *v9; // rcx
  unsigned int v10; // edx
  _WORD *v11; // rbx
  _WORD *i; // r8
  __int16 v13; // ax
  volatile void *v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // eax
  unsigned int v19; // eax

  v6 = *((unsigned int *)a1 + 2);
  LODWORD(v7) = a3;
  if ( (_DWORD)v6 )
    ProbeForRead(a1[2], (unsigned int)v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( *((int *)a2 + 1) < 0 )
  {
    v14 = a1[2];
    if ( a4 )
    {
      LODWORD(v7) = strncpycch(*((_QWORD *)a2 + 1), v14);
    }
    else
    {
      v15 = *((_DWORD *)a1 + 2) >> 1;
      if ( *(_DWORD *)a1 < (unsigned int)v15 )
        v15 = *(unsigned int *)a1;
      v16 = WCSToMBEx(0LL, v14, v15, (char *)a2 + 8, v7);
      if ( v16 < (unsigned int)v7 )
      {
        LODWORD(v7) = v16;
        *(_BYTE *)(v16 + *((_QWORD *)a2 + 1)) = 0;
      }
    }
  }
  else
  {
    if ( a4 )
    {
      v17 = *(unsigned int *)a1;
      v18 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)v17 >= v18 )
        v17 = v18;
      v19 = MBToWCSEx(v6, a1[2], v17, (char *)a2 + 8, v7);
      if ( v19 < (unsigned int)v7 )
      {
        LODWORD(v7) = v19;
        *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v19) = 0;
      }
    }
    else
    {
      v9 = (__int16 *)a1[2];
      v10 = *((_DWORD *)a1 + 2) >> 1;
      if ( (unsigned int)v7 < v10 )
        v10 = v7;
      v11 = (_WORD *)*((_QWORD *)a2 + 1);
      for ( i = v11; v10; --v10 )
      {
        v13 = *v9++;
        *v11++ = v13;
        if ( !v13 )
          break;
      }
      v7 = v11 - i;
    }
    LODWORD(v7) = 2 * v7;
  }
  *(_DWORD *)a2 = v7;
}
