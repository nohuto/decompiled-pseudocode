/*
 * XREFs of HalpQueryProfileSource @ 0x1404B6BC0
 * Callers:
 *     HalpQueryProfileInformation @ 0x140AB79E4 (HalpQueryProfileInformation.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpGetProfileDescriptor @ 0x1404AB874 (HalpGetProfileDescriptor.c)
 */

__int64 __fastcall HalpQueryProfileSource(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int8 v6; // bp
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( a1 >= 0x18 )
  {
    v6 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
    if ( (int)HalpGetProfileDescriptor(*(_DWORD *)a2, v7, &v11) < 0 )
    {
      HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock, v6);
      result = 3221225659LL;
      *a3 = 0;
      return result;
    }
    v9 = v11;
    *(_BYTE *)(a2 + 4) = (unsigned int)KeIsEmptyAffinityEx((unsigned __int16 *)(v11 + 32)) == 0;
    if ( *(_DWORD *)v9 || HalpProfileInterface == &DefaultProfileInterface )
    {
      v10 = *(_DWORD *)(v9 + 24);
    }
    else
    {
      v9 = v11;
      v10 = *(_DWORD *)(296LL * KeGetPcr()->Prcb.Number + HalpProfileData + 24);
    }
    *(_DWORD *)(a2 + 8) = v10;
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v9 + 296);
    HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock, v6);
  }
  else
  {
    v3 = -1073741820;
  }
  *a3 = 24;
  return v3;
}
