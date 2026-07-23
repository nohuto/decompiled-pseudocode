/*
 * XREFs of EtwpValidateEnableNotification @ 0x140898C50
 * Callers:
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 * Callees:
 *     EtwpCheckNotificationAccess @ 0x140898DE4 (EtwpCheckNotificationAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpValidateFilterDescriptors @ 0x1409E4C60 (EtwpValidateFilterDescriptors.c)
 */

__int64 __fastcall EtwpValidateEnableNotification(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned int v6; // ebx
  bool v7; // cf
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  unsigned int *v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax

  v6 = 0;
  v7 = *(_DWORD *)(a2 + 4) < 0x78u;
  *a5 = 0LL;
  if ( v7 || *(_DWORD *)(a2 + 116) && (unsigned int)EtwpValidateFilterDescriptors(a2, a6) || *(_DWORD *)(a2 + 72) > 2u )
    return 3221225485LL;
  v12 = *(unsigned __int16 *)(a2 + 78);
  *(_BYTE *)(a4 + 18) = (v12 & 0x8000) != 0;
  if ( (v12 & 0x8000) == 0 )
  {
    if ( (_DWORD)v12 == 3 )
      return 3221225506LL;
    v13 = *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 - *(_QWORD *)(a2 + 40);
    if ( *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 == *(_QWORD *)(a2 + 40) )
      v13 = *(_QWORD *)PrivateLoggerNotificationGuid.Data4 - *(_QWORD *)(a2 + 48);
    if ( v13 )
    {
      v14 = EtwpAcquireLoggerContextByLoggerId(a1, v12, 0LL);
      if ( !v14 )
        goto LABEL_31;
      v15 = a1 == EtwpHostSiloState;
      *a5 = v14;
      if ( (v15 || (*(_DWORD *)(a2 + 80) & 0x400) == 0)
        && ((*(_DWORD *)(a2 + 80) & 0x20) == 0 || (*(_DWORD *)(v14 + 12) & 0x1030800) == 0) )
      {
        if ( (*(_DWORD *)(v14 + 816) & 0x40) == 0 )
        {
          *(_OWORD *)a4 = *(_OWORD *)(v14 + 276);
          if ( (*(_DWORD *)(v14 + 12) & 0x80u) != 0 )
            *(_BYTE *)(a4 + 16) = 1;
          if ( (*(_DWORD *)(v14 + 12) & 0x1000000) != 0 )
            *(_BYTE *)(a4 + 17) = 1;
          if ( a3 )
            v6 = EtwpCheckNotificationAccess(a2 + 40, a4);
          goto LABEL_19;
        }
LABEL_31:
        v6 = -1073741162;
LABEL_19:
        v16 = (unsigned int *)(a2 + 80);
        goto LABEL_20;
      }
    }
    return 3221225485LL;
  }
  v16 = (unsigned int *)(a2 + 80);
  if ( (*v16 & 0x20) != 0 || (*v16 & 0x400) != 0 )
    return 3221225485LL;
LABEL_20:
  v17 = *v16;
  if ( (*v16 & 0x10) != 0 )
    v18 = v17 & 0xFFFFFFEF;
  else
    v18 = v17 | 0x40;
  *v16 = v18;
  return v6;
}
