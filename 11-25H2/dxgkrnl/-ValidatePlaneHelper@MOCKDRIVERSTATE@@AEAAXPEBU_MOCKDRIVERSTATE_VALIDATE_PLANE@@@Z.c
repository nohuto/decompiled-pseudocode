/*
 * XREFs of ?ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z @ 0x14007608C
 * Callers:
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x140076058 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005385C (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?QueuePlaneViolationWorkItem@@YAXIIPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x140075C54 (-QueuePlaneViolationWorkItem@@YAXIIPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOC.c)
 *     ?CreatePlaneLiveDumpAtPassive@@YAXIIPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1401D8868 (-CreatePlaneLiveDumpAtPassive@@YAXIIPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MO.c)
 */

void __fastcall MOCKDRIVERSTATE::ValidatePlaneHelper(
        struct _MOCKDRIVERSTATE_PLANE **this,
        const struct _MOCKDRIVERSTATE_VALIDATE_PLANE *a2)
{
  __int64 v3; // r8
  __int64 v4; // r10
  struct _MOCKDRIVERSTATE_PLANE *v5; // r9
  unsigned int v6; // r14d
  __int64 v7; // rdi
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 i; // r10
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  struct DXGADAPTER *v15; // r9
  struct _MOCKDRIVERSTATE_PLANE *v16; // [rsp+20h] [rbp-28h]

  if ( !DXGADAPTER::IsLegacyDisplayStateSynchronization(this[3]) )
  {
    v5 = *this;
    if ( !*((_BYTE *)*this + 8) )
    {
      v6 = *(_DWORD *)(v4 + 1856);
      v7 = 0LL;
      v8 = *(_DWORD *)(v4 + 2944);
      while ( 1 )
      {
        if ( (unsigned int)v7 >= *(_DWORD *)v3 )
          return;
        if ( *(_BYTE *)(v3 + 16) )
        {
          v9 = *((_QWORD *)v5
               + 20 * *(unsigned int *)(*(_QWORD *)(v3 + 24) + 4 * v7)
               + 2 * *(unsigned int *)(*(_QWORD *)(v3 + 32) + 4 * v7)
               + 7);
          if ( v9 && *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8 * v7) == v9 )
          {
            v13 = *(_DWORD *)(*(_QWORD *)(v3 + 32) + 4 * v7);
            v14 = *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v7);
LABEL_19:
            v16 = *this;
            v15 = this[3];
            if ( *(_BYTE *)(v3 + 56) )
              CreatePlaneLiveDumpAtPassive(v14, v13, (const struct _MOCKDRIVERSTATE_VALIDATE_PLANE *)v3, v15, v16);
            else
              QueuePlaneViolationWorkItem(v14, v13, (const struct _MOCKDRIVERSTATE_VALIDATE_PLANE *)v3, v15, v16);
            return;
          }
        }
        else
        {
          v10 = 0LL;
LABEL_10:
          if ( (unsigned int)v10 < v6 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              if ( (unsigned int)i >= v8 )
              {
                v10 = (unsigned int)(v10 + 1);
                goto LABEL_10;
              }
              v12 = *((_QWORD *)v5 + 20 * v10 + 2 * i + 7);
              if ( v12 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8 * v7) == v12 )
                  break;
              }
            }
            v13 = i;
            v14 = v10;
            goto LABEL_19;
          }
        }
        v7 = (unsigned int)(v7 + 1);
      }
    }
  }
}
