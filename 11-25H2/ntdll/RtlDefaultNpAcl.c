/*
 * XREFs of RtlDefaultNpAcl @ 0x180065B00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpAddKnownAce @ 0x18005F780 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x180065F00 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlGetAppContainerSidType @ 0x1800847C0 (RtlGetAppContainerSidType.c)
 *     RtlGetAppContainerParent @ 0x180084AF0 (RtlGetAppContainerParent.c)
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlDefaultNpAcl(char **a1)
{
  unsigned __int8 **v2; // rdi
  char *ProcessHeap; // rcx
  unsigned __int8 **Heap; // r15
  int AppContainerSidType; // ebx
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned __int8 *v9; // r14
  char *v10; // rcx
  char *v11; // rcx
  char *v12; // rcx
  char *v13; // rcx
  int v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+44h] [rbp-2Ch] BYREF
  int v17; // [rsp+48h] [rbp-28h] BYREF
  void *v18; // [rsp+50h] [rbp-20h] BYREF
  __int16 Src; // [rsp+58h] [rbp-18h] BYREF
  int v20; // [rsp+5Ah] [rbp-16h]
  __int16 v21; // [rsp+5Eh] [rbp-12h]
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]

  v15 = 0;
  v16 = 0;
  *a1 = 0LL;
  v2 = 0LL;
  ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
  v18 = 0LL;
  v17 = 0;
  Heap = (unsigned __int8 **)RtlAllocateHeap(ProcessHeap, 0, 0x4CuLL);
  if ( Heap )
  {
    AppContainerSidType = NtQueryInformationToken(-6LL, 4LL, Heap, 76LL, &v15);
    if ( AppContainerSidType < 0 )
      goto LABEL_19;
    if ( (int)NtQueryInformationToken(-6LL, 29LL, &v16, 4LL, &v15) >= 0 && v16 )
    {
      v2 = (unsigned __int8 **)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x4CuLL);
      if ( !v2 )
      {
        AppContainerSidType = -1073741801;
        goto LABEL_19;
      }
      AppContainerSidType = NtQueryInformationToken(-6LL, 31LL, v2, 76LL, &v15);
      if ( AppContainerSidType < 0 )
        goto LABEL_16;
      AppContainerSidType = RtlGetAppContainerSidType(*v2, &v17);
      if ( AppContainerSidType < 0 )
        goto LABEL_16;
      if ( v17 == 1 )
      {
        AppContainerSidType = RtlGetAppContainerParent(*v2, &v18);
        if ( AppContainerSidType < 0 )
          goto LABEL_16;
      }
    }
    v6 = 52;
    if ( v2 )
      v6 = 4 * (*v2)[1] + 68;
    if ( v18 )
      v6 += 4 * *((unsigned __int8 *)v18 + 1) + 16;
    v7 = v6 + 4 * ((*Heap)[1] + 14);
    v8 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v7);
    v9 = (unsigned __int8 *)v18;
    *a1 = (char *)v8;
    if ( v8 )
    {
      RtlCreateAcl(v8, v7, 2LL);
      v10 = *a1;
      Src = 257;
      v20 = 0;
      v21 = 1280;
      v22 = 18;
      RtlpAddKnownAce(v10, 2u, 0, 0x10000000, (unsigned __int8 *)&Src, 0);
      v11 = *a1;
      Src = 513;
      v20 = 0;
      v21 = 1280;
      v22 = 32;
      v23 = 544;
      RtlpAddKnownAce(v11, 2u, 0, 0x10000000, (unsigned __int8 *)&Src, 0);
      if ( v2 )
        RtlpAddKnownAce(*a1, 2u, 0, 0x10000000, *v2, 0);
      if ( v9 )
        RtlpAddKnownAce(*a1, 2u, 0, 0x10000000, v9, 0);
      RtlpAddKnownAce(*a1, 2u, 0, 0x10000000, *Heap, 0);
      v12 = *a1;
      v20 = 0;
      v22 = 0;
      v21 = 256;
      Src = 257;
      RtlpAddKnownAce(v12, 2u, 0, 0x80000000, (unsigned __int8 *)&Src, 0);
      v13 = *a1;
      Src = 257;
      v20 = 0;
      v21 = 1280;
      v22 = 7;
      RtlpAddKnownAce(v13, 2u, 0, 0x80000000, (unsigned __int8 *)&Src, 0);
      AppContainerSidType = 0;
    }
    else
    {
      AppContainerSidType = -1073741801;
    }
    if ( v2 )
    {
LABEL_16:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v2);
      v9 = (unsigned __int8 *)v18;
    }
    if ( v9 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v18);
LABEL_19:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    if ( AppContainerSidType >= 0 )
      return (unsigned int)AppContainerSidType;
    goto LABEL_30;
  }
  AppContainerSidType = -1073741801;
LABEL_30:
  if ( *a1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *a1);
    *a1 = 0LL;
  }
  return (unsigned int)AppContainerSidType;
}
