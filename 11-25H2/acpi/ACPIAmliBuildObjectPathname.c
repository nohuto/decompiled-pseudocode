/*
 * XREFs of ACPIAmliBuildObjectPathname @ 0x140039780
 * Callers:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1400394F0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIQueryDeviceBiosNameEx @ 0x1400396E8 (ACPIQueryDeviceBiosNameEx.c)
 *     ACPIBuildDockExtension @ 0x140058480 (ACPIBuildDockExtension.c)
 *     LinkNodeFindByName @ 0x1400A8DA0 (LinkNodeFindByName.c)
 *     ACPIBusIommuBusInterface @ 0x1400B0E50 (ACPIBusIommuBusInterface.c)
 *     PcisuppSetRoutingInfo @ 0x1400B2E18 (PcisuppSetRoutingInfo.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1400BC510 (AcpiGetFullyQualifiedBiosName.c)
 * Callees:
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     AMLIGetNameSpaceObjectPath @ 0x140039980 (AMLIGetNameSpaceObjectPath.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathname(__int64 *a1, PVOID *a2, char a3)
{
  unsigned int v3; // r13d
  int v7; // ebp
  _BYTE *ObjectPath; // rax
  __int64 v9; // rbx
  unsigned int v10; // ebx
  __int64 Pool2; // rax
  char *v12; // rbx
  unsigned int v13; // r14d
  char v15; // cl
  char *v16; // rdx
  unsigned int v17; // edi
  char *v18; // rdx
  BOOL v19; // ecx
  __int64 v20; // r8
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rdi
  _BYTE *v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // al
  unsigned int v29; // eax
  unsigned int v30; // [rsp+50h] [rbp+8h] BYREF

  v30 = 0;
  v3 = 0;
  v7 = -1073741823;
  if ( a1 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(*a1);
    if ( ObjectPath )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( ObjectPath[v9] );
      v10 = v9 + 1;
      v30 = v10;
      ExFreePoolWithTag(ObjectPath, 0);
      Pool2 = ExAllocatePool2(64LL, v10, 1399874369LL);
      v12 = (char *)Pool2;
      if ( Pool2 )
      {
        v7 = AMLIGetNameSpaceObjectPath(a1, Pool2, &v30);
        if ( v7 < 0 )
        {
          ExFreePoolWithTag(v12, 0x53706341u);
        }
        else
        {
          v13 = v30;
          if ( *v12 == 92 && (a3 & 1) == 0 )
            memmove(v12, v12 + 1, v30 - 1);
          if ( (a3 & 2) != 0 )
          {
            v15 = *v12;
            v16 = v12;
            while ( v15 )
            {
              if ( (unsigned __int8)(v15 - 97) <= 0x19u )
                *v16 = v15 - 32;
              v15 = *++v16;
            }
          }
          *a2 = v12;
          if ( (a3 & 4) != 0 )
          {
            v17 = *v12 == 92;
            if ( v17 < v13 )
            {
              v18 = &v12[*v12 == 92];
              v19 = *v12 == 92;
              v20 = v13 - v17;
              do
              {
                v17 = v19 + 5;
                if ( *v18 != 46 )
                  v17 = v19;
                ++v18;
                v19 = v17;
                --v20;
              }
              while ( v20 );
            }
            v21 = v17 + 5;
            if ( v21 != v13 )
            {
              v22 = ExAllocatePool2(64LL, v21, 1399874369LL);
              v23 = v21 - 1;
              v24 = (_BYTE *)v22;
              *(_BYTE *)(v23 + v22) = 0;
              v25 = 0;
              if ( *v12 == 92 )
              {
                *v24 = 92;
                ++v12;
                v25 = 1;
              }
              if ( v25 < (unsigned int)v23 )
              {
                v26 = v25;
                v27 = (unsigned int)v23 - v25;
                do
                {
                  if ( v3 < 4 && *v12 == 46 || (v28 = *v12) == 0 )
                    v28 = 95;
                  else
                    ++v12;
                  v24[v26] = v28;
                  v29 = v3 + 1;
                  v3 = 0;
                  ++v26;
                  if ( v29 <= 4 )
                    v3 = v29;
                  --v27;
                }
                while ( v27 );
              }
              ExFreePoolWithTag(*a2, 0);
              *a2 = v24;
            }
          }
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v7;
}
