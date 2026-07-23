/*
 * XREFs of SaveNodeDistanceInformation @ 0x140C616D0
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     KeQueryNumaCosts @ 0x140C28D48 (KeQueryNumaCosts.c)
 */

void SaveNodeDistanceInformation()
{
  __int64 v0; // rbx
  unsigned int v1; // esi
  __int64 *v2; // r8
  __int64 v3; // r9
  _WORD *v4; // rax
  unsigned int v5; // edi
  _QWORD *NumaCosts; // r13
  int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  ULONG v13; // r14d
  _DWORD *Pool2; // rax
  void *v15; // r12
  __int64 v16; // r10
  _DWORD *v17; // r15
  unsigned int v18; // r8d
  __int64 *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  _WORD *v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned int v25; // edi
  unsigned __int64 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned __int64 v31; // r8
  __int64 *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 *v36; // r11
  __int64 v37; // r10
  __int64 v38; // rcx
  unsigned __int16 *v39; // r9
  int v40; // r8d
  int v41; // edx
  __int64 *v42; // rdi
  __int64 v43; // r14
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rdx
  __int16 v47; // ax
  __int64 v48; // rcx
  unsigned int i; // edx
  __int64 v50; // rax
  unsigned int v51; // esi
  unsigned int v52; // r9d
  __int64 *v53; // r10
  unsigned int j; // r8d
  int v55; // edx
  unsigned int v56; // edi
  int v57; // eax
  int v58; // r15d
  __int64 *v59; // r11
  unsigned int v60; // edi
  __int64 v61; // r12
  unsigned __int16 *v62; // r8
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 *v66; // rsi
  unsigned __int16 v67; // r10
  __int64 v68; // rcx
  int v69; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-69h] BYREF
  ULONG v71; // [rsp+50h] [rbp-61h]
  ULONG ResultLength; // [rsp+54h] [rbp-5Dh] BYREF
  _DWORD *v73; // [rsp+58h] [rbp-59h]
  __int64 *v74; // [rsp+60h] [rbp-51h]
  __int64 v75; // [rsp+68h] [rbp-49h]
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-41h] BYREF
  _DWORD *v77; // [rsp+80h] [rbp-31h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp+7h] BYREF
  char KeyValueInformation[4]; // [rsp+C8h] [rbp+17h] BYREF
  int v81; // [rsp+CCh] [rbp+1Bh]
  int v82; // [rsp+D0h] [rbp+1Fh]
  unsigned int v83; // [rsp+D4h] [rbp+23h]

  KeyHandle = (HANDLE)-1LL;
  v0 = (unsigned __int16)KeNumberNodes;
  ResultLength = 0;
  v1 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  if ( !KeNumberNodes )
    goto LABEL_7;
  v2 = KeNodeBlock;
  v3 = (unsigned __int16)KeNumberNodes;
  do
  {
    v4 = (_WORD *)*v2;
    v5 = v1++;
    ++v2;
    if ( *v4 != v4[1] )
      v1 = v5;
    --v3;
  }
  while ( v3 );
  if ( v1 != 1 )
  {
LABEL_7:
    NumaCosts = KeQueryNumaCosts();
    if ( !NumaCosts )
    {
LABEL_101:
      if ( KeyHandle != (HANDLE)-1LL )
        ZwClose(KeyHandle);
      return;
    }
    v7 = 0;
    if ( (_DWORD)v0 != 1 )
    {
      do
      {
        v8 = v7 + 1;
        v9 = v7 + 1;
        if ( v7 + 1 < (unsigned int)v0 )
        {
          v10 = v8 + v7 * (_DWORD)v0;
          do
          {
            v11 = NumaCosts[v10];
            if ( v11 != -1LL )
            {
              v12 = (NumaCosts[v7 + v9 * (unsigned int)v0] >> 1) + (v11 >> 1);
              NumaCosts[v10] = v12;
              NumaCosts[v7 + v9 * (unsigned int)v0] = v12;
            }
            ++v9;
            v10 = (unsigned int)(v10 + 1);
          }
          while ( v9 < (unsigned int)v0 );
        }
        ++v7;
      }
      while ( v8 < (int)v0 - 1 );
    }
    v13 = 2 * v1 * (v1 + 2) + 4;
    v71 = v13;
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v13, 0x2020654BuLL);
    v77 = Pool2;
    v15 = Pool2;
    if ( !Pool2 )
    {
LABEL_99:
      ExFreePoolWithTag(NumaCosts, 0);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      goto LABEL_101;
    }
    *Pool2 = v1;
    v16 = v1 + 1;
    v17 = &Pool2[v16];
    v18 = 1;
    v73 = v17;
    if ( (_DWORD)v0 )
    {
      v19 = KeNodeBlock;
      v20 = v0;
      do
      {
        if ( *(_WORD *)*v19 == *(_WORD *)(*v19 + 2) )
        {
          v21 = v18++;
          Pool2[v21] = *(_DWORD *)(*v19 + 4);
        }
        ++v19;
        --v20;
      }
      while ( v20 );
    }
    if ( v1 * v1 )
    {
      v22 = v1 * v1;
      v23 = &Pool2[v16];
      while ( v22 )
      {
        *v23++ = -1;
        --v22;
      }
    }
    v24 = 1LL;
    v25 = v0 * v0;
    if ( !((_DWORD)v0 * (_DWORD)v0) )
      goto LABEL_37;
    v26 = NumaCosts;
    v27 = v25;
    v28 = v25;
    do
    {
      if ( v24 < *v26 && *v26 != -1LL )
        v24 = *v26;
      ++v26;
      --v28;
    }
    while ( v28 );
    if ( v24 > 0x1000000000000LL )
    {
      v29 = v24 >> 16;
      v30 = NumaCosts;
      do
      {
        if ( *v30 != -1LL )
          *v30 >>= 16;
        ++v30;
        --v27;
      }
      while ( v27 );
      v31 = 0x8000000000000000uLL / v29;
    }
    else
    {
LABEL_37:
      v31 = 0x8000000000000000uLL / v24;
      if ( !v25 )
      {
LABEL_43:
        LODWORD(v35) = 0;
        if ( (_DWORD)v0 )
        {
          v36 = KeNodeBlock;
          v75 = v0;
          v74 = KeNodeBlock;
          v37 = v0;
          v38 = v0;
          do
          {
            v39 = (unsigned __int16 *)*v36;
            if ( *(_WORD *)*v36 == *(_WORD *)(*v36 + 2) )
            {
              v40 = 0;
              while ( 1 )
              {
                v41 = v35;
                if ( (unsigned int)v35 >= v1 )
                  break;
                v35 = (unsigned int)(v35 + 1);
                if ( *((_DWORD *)v15 + v35) == *((_DWORD *)v39 + 1) )
                {
                  v40 = v1 * v41;
                  break;
                }
              }
              v42 = KeNodeBlock;
              v43 = v37;
              do
              {
                v44 = *(unsigned __int16 *)*v42;
                if ( (_WORD)v44 == *(_WORD *)(*v42 + 2) )
                {
                  if ( NumaCosts[v44 + (unsigned int)v0 * *v39] == 0xFFFFLL )
                  {
                    v17 = v73;
                  }
                  else
                  {
                    v45 = 0;
                    if ( v1 )
                    {
                      do
                      {
                        v46 = (unsigned int)(v45 + 1);
                        if ( *((_DWORD *)v15 + v46) == *(_DWORD *)(*v42 + 4) )
                          break;
                        ++v45;
                      }
                      while ( (unsigned int)v46 < v1 );
                    }
                    v47 = NumaCosts[v44 + (unsigned int)v0 * *v39];
                    v48 = (unsigned int)(v40 + v45);
                    v17 = v73;
                    *((_WORD *)v73 + v48) = v47;
                    if ( !v47 )
                      *((_WORD *)v17 + v48) = 2;
                  }
                }
                ++v42;
                --v43;
              }
              while ( v43 );
              v36 = v74;
              v37 = v0;
              v38 = v75;
              LODWORD(v35) = 0;
            }
            ++v36;
            --v38;
            v74 = v36;
            v75 = v38;
          }
          while ( v38 );
          v13 = v71;
          LODWORD(v16) = v1 + 1;
        }
        for ( i = 0; i < v1; *((_WORD *)v17 + v50) = 0 )
        {
          v50 = i * (unsigned int)v16;
          ++i;
        }
        v51 = 10;
        RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\NUMA");
        RtlInitUnicodeString(&ValueName, L"Variation Threshold");
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) < 0 )
        {
          KeyHandle = (HANDLE)-1LL;
        }
        else if ( ZwQueryValueKey(
                    KeyHandle,
                    &ValueName,
                    KeyValuePartialInformation,
                    KeyValueInformation,
                    0x14u,
                    &ResultLength) >= 0
               && v81 == 4
               && v82 == 4 )
        {
          v51 = v83;
          if ( v83 - 1 > 0x31 )
            v51 = 10;
        }
        v52 = 0;
        if ( (_DWORD)v0 )
        {
          v53 = KeNodeBlock;
          do
          {
            if ( *(_WORD *)*v53 == *(_WORD *)(*v53 + 2) )
            {
              for ( j = 0; j < (unsigned int)v0; ++j )
              {
                if ( *(_WORD *)KeNodeBlock[j] == *(_WORD *)(KeNodeBlock[j] + 2) && v52 != j )
                {
                  v55 = NumaCosts[v52 * (_DWORD)v0 + j];
                  v56 = *((_DWORD *)KeNodeDistance + j + v52 * (unsigned __int16)KeNumberNodes);
                  v57 = v56 - v55;
                  if ( (int)(v55 - v56) >= 0 )
                    v57 = v55 - v56;
                  if ( 100 * v57 / v51 > v56 )
                  {
                    if ( KeyHandle != (HANDLE)-1LL )
                    {
                      RtlInitUnicodeString(&ValueName, L"Node Distance");
                      ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, v15, v13);
                    }
                    v58 = (unsigned __int16)KeNumberNodes;
                    v59 = KeNodeBlock;
                    v60 = 0;
                    v61 = v0;
                    do
                    {
                      v62 = (unsigned __int16 *)*v59;
                      v63 = *(unsigned __int16 *)(*v59 + 2);
                      if ( *(_WORD *)*v59 != (_WORD)v63 )
                        v62 = (unsigned __int16 *)KeNodeBlock[v63];
                      v64 = v61;
                      v65 = v60 * v58;
                      v66 = KeNodeBlock;
                      do
                      {
                        v67 = *(_WORD *)*v66;
                        v68 = *(unsigned __int16 *)(*v66 + 2);
                        if ( v67 != (_WORD)v68 )
                          v67 = *(_WORD *)KeNodeBlock[v68];
                        v69 = *v62;
                        if ( (_WORD)v69 == v67 )
                          *((_DWORD *)KeNodeDistance + v65) = 0;
                        else
                          *((_DWORD *)KeNodeDistance + v65) = NumaCosts[(unsigned int)v67 + (_DWORD)v0 * v69];
                        v65 = (unsigned int)(v65 + 1);
                        ++v66;
                        --v64;
                      }
                      while ( v64 );
                      ++v60;
                      ++v59;
                      v61 = v0;
                    }
                    while ( v60 < (unsigned int)v0 );
                    v15 = v77;
                    goto LABEL_99;
                  }
                }
              }
            }
            ++v52;
            ++v53;
          }
          while ( v52 < (unsigned int)v0 );
        }
        goto LABEL_99;
      }
    }
    v32 = NumaCosts;
    v33 = v25;
    do
    {
      if ( *v32 == -1 )
        v34 = 0xFFFFLL;
      else
        v34 = (v31 * *v32) >> 48;
      *v32++ = v34;
      --v33;
    }
    while ( v33 );
    goto LABEL_43;
  }
}
