/*
 * XREFs of PspSchedulerSharedDataRegionCreate @ 0x1408BA4BC
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14041B630 (ObReferenceObjectByPointerWithTag.c)
 *     Feature_UserModeAutoBoost__private_IsEnabledPreCheck @ 0x1404BA1F0 (Feature_UserModeAutoBoost__private_IsEnabledPreCheck.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     MiMapViewInSystemSpace @ 0x1408BA3B8 (MiMapViewInSystemSpace.c)
 *     MmMapViewOfSection @ 0x1408FBFC0 (MmMapViewOfSection.c)
 *     MmCreateSectionEx @ 0x14093C3AC (MmCreateSectionEx.c)
 */

__int64 __fastcall PspSchedulerSharedDataRegionCreate(_KPROCESS *Object, __int64 *a2)
{
  char PreviousMode; // bl
  int v5; // eax
  _QWORD *v6; // rbx
  int Section; // edi
  __int64 *v8; // r14
  __int64 v9; // rcx
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 Tag; // [rsp+20h] [rbp-60h]
  int v17; // [rsp+40h] [rbp-40h]
  ULONGLONG ullMultiplicand; // [rsp+50h] [rbp-30h]
  __int128 v19; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+50h] BYREF
  PVOID Objecta; // [rsp+D8h] [rbp+58h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  Objecta = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Feature_UserModeAutoBoost__private_IsEnabledPreCheck();
  if ( Object != KeGetCurrentThread()->ApcState.Process )
    return (unsigned int)-1073741637;
  v5 = ObCreateObjectEx(PreviousMode, PspSchedulerSharedDataType, 0, PreviousMode, Tag, 248, 0, 0, &Objecta, 0LL);
  v6 = Objecta;
  Section = v5;
  if ( v5 >= 0 )
  {
    memset_0(Objecta, 0, 0xF8uLL);
    v6[25] = 0LL;
    v6[27] = (char *)v6 + 228;
    *((_DWORD *)v6 + 52) = 128;
    *((_DWORD *)v6 + 56) = 0;
    Section = ObReferenceObjectByPointerWithTag(Object, 0x200u, (POBJECT_TYPE)PsProcessType, 0, 0x61537350u);
    if ( Section >= 0 )
    {
      LODWORD(ullMultiplicand) = 0;
      v8 = v6 + 21;
      v6[20] = Object;
      v19 = 0LL;
      Section = MmCreateSectionEx((int)v6 + 168, 0, 0x2000, 4, 0x4000000, 0LL, 0LL, 0, v17, 0LL, ullMultiplicand);
      if ( Section >= 0 )
      {
        v9 = *v8;
        Objecta = (PVOID)0x2000;
        *(_QWORD *)&v19 = 0LL;
        Section = MiMapViewInSystemSpace(v9, v6 + 22, (unsigned __int64 *)&Objecta, (__int64 *)&v19, 0LL, 0LL);
        if ( Section >= 0 )
        {
          v10 = (char *)v6 + 34;
          v11 = 0LL;
          v12 = 2LL;
          do
          {
            v13 = v6[22];
            *(_QWORD *)(v10 - 18) = 0LL;
            v14 = v11 + v13;
            *(_QWORD *)(v10 - 34) = v14;
            *(_QWORD *)(v10 - 26) = 0LL;
            *(_QWORD *)(v10 - 10) = 0LL;
            v11 += 4096LL;
            *(_WORD *)v10 = 0;
            *((_WORD *)v10 - 1) = 8 * (((unsigned __int16)((v14 & 0xFFF) + 0x1FFF) >> 12) + 6);
            *(_DWORD *)(v10 + 30) = 4096;
            v10 += 80;
            *(_QWORD *)(v10 - 58) = v14 & 0xFFFFFFFFFFFFF000uLL;
            *(_DWORD *)(v10 - 46) = v14 & 0xFFF;
            --v12;
          }
          while ( v12 );
          Section = MmMapViewOfSection(
                      *v8,
                      (_DWORD)Object,
                      (int)v6 + 184,
                      0,
                      0LL,
                      (__int64)&v20,
                      (__int64)&Objecta,
                      1,
                      0x400000,
                      4);
          if ( Section >= 0 )
          {
            Section = ObInsertObjectEx((char *)v6, 0LL, 1, 0, 0, 0LL, (__int64)&v21);
            if ( Section < 0 )
              return (unsigned int)Section;
            v6 = 0LL;
            *a2 = v21;
            Section = 0;
            v21 = 0LL;
          }
        }
      }
    }
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)Section;
}
