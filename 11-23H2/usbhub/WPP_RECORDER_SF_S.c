/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C003B830
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C0001B70 (UsbhBusConnectPdo.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0044E20 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0045828 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C0045B18 (UsbhGetRegUsbHubFlags.c)
 *     UsbhQueryGlobalHubValue @ 0x1C0045EC0 (UsbhQueryGlobalHubValue.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C00460D0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhRegDriverEntry @ 0x1C0046560 (UsbhRegDriverEntry.c)
 *     UsbhRegQueryGlobalKey @ 0x1C00468F0 (UsbhRegQueryGlobalKey.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0046A7C (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0046D44 (UsbhSetPdoRegistryParameter.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C0047230 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C0047300 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C00473E0 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x1C00474B0 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x1C0047590 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C0047660 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C0047730 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1C0047810 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x1C00478E0 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x1C00479C0 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C0047A90 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C0047B60 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x1C0047C60 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C0047D70 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1C0047E50 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x1C0047F20 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C0047FF0 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x1C00480C0 (Usbh_USB_OS_VENDOR_CODE.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C00481C0 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x1C0048290 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x1C0048360 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C0048430 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0055540 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C0059A68 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0059B28 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0059D10 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0059EA0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhQueryUxdDevice @ 0x1C005AA70 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C003B830
 * Reason: Hex-Rays returned no pseudocode for 0x1C003B830
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003B830: mov     rax, rsp
 * 00000001C003B833: mov     [rax+8], rbx
 * 00000001C003B837: mov     [rax+10h], rbp
 * 00000001C003B83B: mov     [rax+18h], rsi
 * 00000001C003B83F: mov     [rax+20h], rdi
 * 00000001C003B843: push    r12
 * 00000001C003B845: push    r14
 * 00000001C003B847: push    r15
 * 00000001C003B849: sub     rsp, 40h
 * 00000001C003B84D: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C003B854: lea     r12, aNull_0; "NULL"
 * 00000001C003B85B: mov     rbx, [rsp+58h+arg_28]
 * 00000001C003B863: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C003B867: xor     r15d, r15d
 * 00000001C003B86A: movzx   ebp, r9w
 * 00000001C003B86E: mov     r14, rcx
 * 00000001C003B871: mov     edx, [rax+2Ch]
 * 00000001C003B874: lea     esi, [rdi+0Bh]
 * 00000001C003B877: test    dl, 1
 * 00000001C003B87A: jz      short loc_1C003B8DC
 * 00000001C003B87C: test    rbx, rbx
 * 00000001C003B87F: jz      short loc_1C003B898
 * 00000001C003B881: mov     rax, rdi
 * 00000001C003B884: inc     rax
 * 00000001C003B887: cmp     [rbx+rax*2], r15w
 * 00000001C003B88C: jnz     short loc_1C003B884
 * 00000001C003B88E: lea     rdx, ds:2[rax*2]
 * 00000001C003B896: jmp     short loc_1C003B89B
 * 00000001C003B898: mov     rdx, rsi
 * 00000001C003B89B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003B8A2: test    rbx, rbx
 * 00000001C003B8A5: mov     r8, [rsp+58h+arg_20]
 * 00000001C003B8AD: mov     rcx, rbx
 * 00000001C003B8B0: cmovz   rcx, r12
 * 00000001C003B8B4: mov     [rsp+58h+var_28], r15
 * 00000001C003B8B9: mov     [rsp+58h+var_30], rdx
 * 00000001C003B8BE: mov     r9d, ebp
 * 00000001C003B8C1: mov     [rsp+58h+var_38], rcx
 * 00000001C003B8C6: mov     edx, 2Bh ; '+'
 * 00000001C003B8CB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003B8D2: mov     rcx, [rcx+18h]
 * 00000001C003B8D6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003B8DC: test    rbx, rbx
 * 00000001C003B8DF: jz      short loc_1C003B8F6
 * 00000001C003B8E1: inc     rdi
 * 00000001C003B8E4: cmp     [rbx+rdi*2], r15w
 * 00000001C003B8E9: jnz     short loc_1C003B8E1
 * 00000001C003B8EB: lea     rsi, ds:2[rdi*2]
 * 00000001C003B8F3: test    rbx, rbx
 * 00000001C003B8F6: mov     r9, [rsp+58h+arg_20]
 * 00000001C003B8FE: cmovz   rbx, r12
 * 00000001C003B902: mov     [rsp+58h+var_20], r15
 * 00000001C003B907: xor     edx, edx
 * 00000001C003B909: mov     [rsp+58h+var_28], rsi
 * 00000001C003B90E: mov     rcx, r14
 * 00000001C003B911: mov     [rsp+58h+var_30], rbx
 * 00000001C003B916: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C003B91B: lea     r8d, [rdx+1]
 * 00000001C003B91F: call    cs:__imp_WppAutoLogTrace
 * 00000001C003B926: nop     dword ptr [rax+rax+00h]
 * 00000001C003B92B: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003B930: mov     rbp, [rsp+58h+arg_8]
 * 00000001C003B935: mov     rsi, [rsp+58h+arg_10]
 * 00000001C003B93A: mov     rdi, [rsp+58h+arg_18]
 * 00000001C003B93F: add     rsp, 40h
 * 00000001C003B943: pop     r15
 * 00000001C003B945: pop     r14
 * 00000001C003B947: pop     r12
 * 00000001C003B949: retn
 */
