/*
 * XREFs of ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1402E658C
 * Callers:
 *     ?EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1402E6514 (-EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1402E7858 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EnableAccountingForProcess(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        struct _EPROCESS *a3,
        bool a4)
{
  const char *ProcessImageFileName; // rcx
  __int64 v8; // rdx
  _BYTE *v9; // r8
  signed __int64 v10; // rcx
  char v11; // al
  _BYTE *v12; // rax
  __int64 v13; // rcx
  _BYTE *v14; // rax
  SIZE_T v15; // rbx
  unsigned int i; // edi
  __int64 v17; // rsi
  unsigned int j; // ebx
  _OWORD Source2[2]; // [rsp+20h] [rbp-58h] BYREF
  char v20; // [rsp+40h] [rbp-38h]

  v20 = 0;
  memset(Source2, 0, sizeof(Source2));
  if ( a3 )
  {
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(a3);
    if ( !ProcessImageFileName )
      ProcessImageFileName = File;
  }
  else
  {
    ProcessImageFileName = "ExternalActivation";
  }
  v8 = 33LL;
  v9 = Source2;
  v10 = ProcessImageFileName - (const char *)Source2;
  do
  {
    if ( v8 == -2147483613 )
      break;
    v11 = v9[v10];
    if ( !v11 )
      break;
    *v9++ = v11;
    --v8;
  }
  while ( v8 );
  v12 = v9 - 1;
  if ( v8 )
    v12 = v9;
  *v12 = 0;
  if ( v8 )
  {
    v13 = 33LL;
    v14 = Source2;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v13;
    }
    while ( v13 );
    v15 = (33 - v13) & -(__int64)(v13 != 0);
    if ( v13 )
    {
      if ( v15 )
      {
        for ( i = 0; i < 0x40; ++i )
        {
          v17 = 4720LL * i;
          if ( *((_BYTE *)this + v17 + 104)
            && *(_QWORD *)((char *)this + v17) == a2
            && RtlCompareMemory((char *)this + v17 + 8, Source2, v15) == v15 )
          {
            for ( j = 0; j < *(_DWORD *)((char *)this + v17 + 44); ++j )
            {
              if ( *(_DWORD *)((char *)this + 72 * j + v17 + 144) )
                DripsBlockerTrackingHelper::EnableEntryAccounting(this, i, j, a4);
            }
            return;
          }
        }
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 856;
    }
  }
}
