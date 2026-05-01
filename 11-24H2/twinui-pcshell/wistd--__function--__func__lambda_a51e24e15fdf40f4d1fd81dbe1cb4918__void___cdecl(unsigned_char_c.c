/*
 * XREFs of wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x18007E3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x18007E618 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ??$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z @ 0x18007E7EC (--$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007EA0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     memcpy_s_4 @ 0x18067CC18 (memcpy_s_4.c)
 */

void __fastcall wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl_unsigned_char_const_____32___::operator()(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r14d
  unsigned int v10; // eax
  char v11; // si
  char v12; // si
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 Destination; // [rsp+80h] [rbp+40h] BYREF
  __int64 Source; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v23; // [rsp+90h] [rbp+50h] BYREF

  v2 = a2[1];
  v3 = *(_QWORD *)(a1 + 8);
  LODWORD(Destination) = 0;
  Source = v2;
  memcpy_s_4(&Destination, 4uLL, &Source, 4uLL);
  v5 = a2[2];
  v6 = Destination;
  LODWORD(Destination) = 0;
  Source = v5;
  memcpy_s_4(&Destination, 4uLL, &Source, 4uLL);
  v7 = *a2;
  Source = 0LL;
  Destination = v7;
  memcpy_s_4(&Source, 8uLL, &Destination, 8uLL);
  v8 = a2[3];
  v23 = 0;
  Destination = v8;
  memcpy_s_4(&v23, 4uLL, &Destination, 4uLL);
  v9 = (unsigned __int8)v23;
  v10 = v23 >> 8;
  v11 = BYTE1(v23);
  v23 = (unsigned __int8)v23;
  v12 = v11 & 1;
  LOBYTE(Destination) = v12;
  LOBYTE(Source) = (v10 & 2) != 0;
  TouchKeyboardExperienceTelemetryLogger::OnTouchEvent<unsigned int,bool &,bool &>(&v23, &Source, &Destination);
  v13 = *(_QWORD *)(v3 + 584);
  if ( v13 )
  {
    v14 = 0;
    if ( v9 < 2 )
    {
      v14 = v12 != 0 ? 16 : 2;
    }
    else if ( v9 == 4 )
    {
      if ( (unsigned int)(v6 - 256) > 9 )
      {
        if ( v6 == 514 || v6 == 517 )
          v14 = 1;
      }
      else
      {
        v14 = 4;
      }
    }
    v18 = v14;
    v19 = 0;
    v15 = KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(v13, &v18);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1802,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
    LOBYTE(v16) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
      v16);
    v17 = *(_QWORD *)(v3 + 2208);
    if ( v17 )
    {
      AcquireSRWLockExclusive(*(PSRWLOCK *)(v3 + 2208));
      *(_BYTE *)(v17 + 8) = v14 == 16;
      *(_BYTE *)(v17 + 16) |= v14 == 2;
      ReleaseSRWLockExclusive((PSRWLOCK)v17);
    }
  }
}
