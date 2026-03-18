/*
 * XREFs of ?EffectHashesCompiled@CConnection@DirectComposition@@QEBA_NPEB_KI@Z @ 0x1402243A0
 * Callers:
 *     ?WaitingForEffectCompile@CBatch@DirectComposition@@AEAA_NXZ @ 0x14022578C (-WaitingForEffectCompile@CBatch@DirectComposition@@AEAA_NXZ.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     Feature_EffectHashUMA__private_IsEnabledDeviceUsageNoInline @ 0x140224530 (Feature_EffectHashUMA__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall DirectComposition::CConnection::EffectHashesCompiled(
        DirectComposition::CConnection *this,
        const unsigned __int64 *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  __int64 i; // rdi
  int IsEnabledDeviceUsageNoInline; // r8d
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
LABEL_2:
  if ( (unsigned int)v6 >= a3 )
    return 1;
  v7 = a2[v6];
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 72); i = (unsigned int)(i + 1) )
  {
    IsEnabledDeviceUsageNoInline = Feature_EffectHashUMA__private_IsEnabledDeviceUsageNoInline(this);
    v10 = (__int64 *)(*((_QWORD *)this + 35) + 8 * i);
    if ( IsEnabledDeviceUsageNoInline )
    {
      v13 = 0LL;
      RtlCopyFromUser(&v13, v10, 8uLL);
      v11 = v13;
    }
    else
    {
      v11 = *v10;
    }
    if ( v7 == v11 )
    {
      v6 = (unsigned int)(v6 + 1);
      goto LABEL_2;
    }
  }
  return 0;
}
