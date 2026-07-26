/*
 * XREFs of ?ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140067380
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsSatisfiedByOidGenStatistics@@YAKK@Z @ 0x1400675C0 (-ndisIsSatisfiedByOidGenStatistics@@YAKK@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

void __fastcall ndisOidPostMiniportStats(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // r9
  _QWORD *v4; // rcx
  unsigned int v5; // r8d
  unsigned int v6; // r10d
  unsigned int v7; // edi
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v9; // r10
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)(v1 + 144);
  if ( v3 )
  {
    v4 = *(_QWORD **)(v1 + 144);
    if ( *(_DWORD *)(v1 + 32) == 131334 )
    {
      v5 = *(_DWORD *)v3;
      if ( *(_DWORD *)v3 )
      {
        v6 = 0;
        v7 = 8;
        if ( v5 == 131332 )
        {
          v6 = 16;
        }
        else if ( v5 <= 0x20201 )
        {
          if ( v5 == 131585 )
          {
            v6 = 128;
          }
          else if ( v5 == 131331 )
          {
            v6 = 88;
          }
        }
        else
        {
          switch ( v5 )
          {
            case 0x20202u:
              v6 = 64;
              break;
            case 0x20203u:
              v6 = 136;
              break;
            case 0x20204u:
              v6 = 72;
              break;
            case 0x20205u:
              v6 = 144;
              break;
            case 0x20206u:
              v6 = 80;
              break;
            case 0x20207u:
              v6 = 104;
              break;
            case 0x20208u:
              v6 = 32;
              break;
            case 0x20209u:
              v6 = 112;
              break;
            case 0x2020Au:
              v6 = 40;
              break;
            case 0x2020Bu:
              v6 = 120;
              break;
            case 0x2020Cu:
              v6 = 48;
              break;
            case 0x20219u:
              v6 = 24;
              break;
            case 0x2021Au:
              v6 = 56;
              break;
            case 0x2021Bu:
              v6 = 8;
              break;
            case 0x2021Cu:
              v6 = 96;
              break;
            default:
              break;
          }
        }
        if ( *(_DWORD *)(v3 + 16) < 8u )
          v7 = 4;
        if ( !v6 || *((_DWORD *)a1 + 10) )
        {
          if ( v5 != 131333 || *((_DWORD *)a1 + 10) )
          {
            v7 = 0;
          }
          else
          {
            IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(0x2021Bu);
            Src = *(_QWORD *)(IsSatisfiedByOidGenStatistics + v9) - *(_QWORD *)(v9 + 16);
            memmove(*(void **)(*(_QWORD *)(v1 + 144) + 8LL), &Src, v7);
          }
        }
        else
        {
          memmove(*(void **)(v3 + 8), (const void *)(*(_QWORD *)(v1 + 40) + v6), v7);
        }
        *(_DWORD *)(v1 + 52) = v7;
        ExFreePoolWithTag(*(PVOID *)(v1 + 40), 0);
        v4 = *(_QWORD **)(v1 + 144);
        *(_QWORD *)(v1 + 40) = v4[1];
        *(_DWORD *)(v1 + 48) = *((_DWORD *)v4 + 4);
        *(_DWORD *)(v1 + 32) = *(_DWORD *)v4;
      }
    }
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(v1 + 144) = 0LL;
  }
}
