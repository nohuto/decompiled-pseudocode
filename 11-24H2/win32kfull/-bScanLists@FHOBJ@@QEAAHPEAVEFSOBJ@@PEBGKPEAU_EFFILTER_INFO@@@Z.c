/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1400FB1C0
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400BA5EC (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400F8978 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 *     ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1400F91DC (-bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1400FAFE8 (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1400FB130 (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1400F98A4 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1400FD250 (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall FHOBJ::bScanLists(FHOBJ *this, struct EFSOBJ *a2, WCHAR *a3, int a4, struct _EFFILTER_INFO *a5)
{
  const unsigned __int16 *v5; // rax
  char v6; // r12
  WCHAR *v10; // rbx
  __int64 v11; // rbx
  _WORD *v12; // rdx
  char *v13; // r9
  unsigned int i; // eax
  int v15; // ecx
  char *j; // rdx
  _WORD *k; // rax
  _QWORD *v19; // rsi
  int v20; // eax
  int v21; // edi
  __int64 v22; // rbx
  __int64 v23; // r8
  int Buffer; // ecx
  USHORT *p_Buffer; // rax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-51h] BYREF
  _WORD v28[32]; // [rsp+60h] [rbp-31h] BYREF

  v5 = a3 + 31;
  v6 = 2;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  if ( a4 != 3 )
    v6 = 0;
  v10 = a3;
  for ( DestinationString = 0LL; v10 < v5; ++v10 )
  {
    if ( !*v10 )
      break;
  }
  v11 = v10 - a3;
  if ( (_DWORD)v11 )
  {
    SourceString.Buffer = a3;
    SourceString.MaximumLength = 64;
    DestinationString.MaximumLength = 64;
    SourceString.Length = 2 * v11;
    DestinationString.Buffer = v28;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  }
  v12 = v28;
  v13 = 0LL;
  v28[(int)v11] = 0;
  for ( i = 0; *v12; i = v15 + 257 * i )
    v15 = *(unsigned __int8 *)v12++;
  for ( j = *(char **)(*((_QWORD *)this + 1) + 8LL * (i % *(_DWORD *)(*((_QWORD *)this + 1) + 8LL)) + 40);
        j;
        j = *(char **)j )
  {
    for ( k = v28; *k == *(_WORD *)((char *)k + j - (char *)v28 + 60); ++k )
    {
      if ( !*k )
      {
        if ( (*((_DWORD *)j + 8) & 2) == 0 )
          goto LABEL_13;
        v13 = j;
        break;
      }
    }
  }
  j = v13;
LABEL_13:
  if ( !j )
    return 1LL;
  v19 = (_QWORD *)*((_QWORD *)j + 1);
  v20 = *((_DWORD *)j + 6);
  v21 = 0;
  DestinationString = 0LL;
  *((_DWORD *)a5 + 8) = v20;
  while ( 1 )
  {
    v22 = v19[1];
    *(_QWORD *)&SourceString.Length = v22;
    if ( !(unsigned int)PFEOBJ::bFilteredOut((PFEOBJ *)&SourceString, a5) )
    {
      if ( a4 == 1 )
      {
        v23 = *(_QWORD *)(v22 + 32);
        switch ( *(_WORD *)(v23 + 52) & 0x21 )
        {
          case 1:
            Buffer = (int)DestinationString.Buffer;
            p_Buffer = (USHORT *)&DestinationString.Buffer;
            v21 = 2;
            break;
          case 32:
            Buffer = *(_DWORD *)(&DestinationString.MaximumLength + 1);
            p_Buffer = &DestinationString.MaximumLength + 1;
            v21 = 1;
            break;
          case 33:
            Buffer = HIDWORD(DestinationString.Buffer);
            p_Buffer = (USHORT *)&DestinationString.Buffer + 2;
            v21 = 3;
            break;
          default:
            Buffer = *(_DWORD *)&DestinationString.Length;
            p_Buffer = (USHORT *)&DestinationString;
            v21 = 0;
            break;
        }
        if ( Buffer )
        {
          if ( _wcsicmp((const wchar_t *)(v23 + *(int *)(v23 + 8)), (const wchar_t *)(v23 + *(int *)(v23 + 16))) )
          {
            v21 = 5;
            goto LABEL_26;
          }
          v21 = 4;
        }
        else
        {
          *(_DWORD *)p_Buffer = 1;
        }
      }
      if ( !(unsigned int)EFSOBJ::bAdd(a2, v22, v21, v6, *((_DWORD *)a5 + 9)) )
        return 0LL;
    }
LABEL_26:
    v19 = (_QWORD *)*v19;
    if ( !v19 )
      return 1LL;
  }
}
